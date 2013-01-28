#include "lottery.h"
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QKeyEvent>
#include <QDir>

Lottery::Lottery(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);
	connect(&myTimer,SIGNAL(timeout()),this,SLOT(ShowName()));
	QTimer::singleShot(0,this,SLOT(InitialNameList()));
}

Lottery::~Lottery()
{

}

void Lottery::ShowName(const QString& name)
{
	QString nm;
	QString fmt = 
		"<html><head/><body><p><span style=\" font-size:96pt; color:#ff0000;\">%1</span></p></body></html>";
	if(name.isEmpty())
	{
		if(!myTimer.isActive()) return;
		nm = myNames.at(qrand() % myNames.size());
	}
	else
	{
		nm = name;
	}

	ui.nameLabel->setText(fmt.arg(nm));
}

void Lottery::InitialNameList()
{
	QFile nameFile(tr("./����.txt"));
	if(!nameFile.open(QFile::ReadOnly))
	{
		QMessageBox::information(this,tr("����"),tr("û���ҵ�����"));
		qApp->exit();
	}

	{
		QTextStream its(&nameFile);
		while(!its.atEnd())
		{
			QString name = its.readLine();
			const QStringList& sets = name.split(",");
			if(sets.size() && (!sets.last().isEmpty()))
			{
				myNames.append(sets.last());
			}
		}
	}

	{
		QFile successFile(tr("./�н�.txt"));
		if(successFile.open(QFile::ReadWrite))
		{
			QTextStream its(&successFile);
			while(!its.atEnd())
			{
				QString name = its.readLine();
				myNames.removeAll(name);
				mySuccessNames.append(name);
			}
		}
	}
	ui.numLabel->setText(tr("��%1��").arg(myNames.size() + mySuccessNames.size()));
}

void Lottery::keyReleaseEvent( QKeyEvent* evt )
{
	if(evt->key() == Qt::Key_Space)
	{
		if(myTimer.isActive())
		{
			myTimer.stop();
			const QString& name = myNames.at(qrand() % myNames.size());
			ShowName(name);
			WriteName(name);
			mySuccessNames.append(name);
			myNames.removeAll(name);
			ui.tipLabel->setText(tr("����Space��ʼ"));
		}
		else
		{
			myTimer.start(10);
			ui.tipLabel->setText(tr("����Space����"));
		}
	}
	QWidget::keyReleaseEvent(evt);
}

void Lottery::WriteName( const QString& name )
{
	QFile successName(tr("./�н�.txt"));
	if(successName.open(QFile::Append))
	{
		QTextStream ots(&successName);
		ots << name << endl;
	}
}
