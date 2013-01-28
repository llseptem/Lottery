#ifndef LOTTERY_H
#define LOTTERY_H

#include <QtGui/QWidget>
#include <QTimer>
#include "ui_lottery.h"

class Lottery : public QWidget
{
	Q_OBJECT

public:
	Lottery(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Lottery();

protected:
	virtual void keyReleaseEvent(QKeyEvent* evt);
private slots:
	void InitialNameList();
	void ShowName(const QString& name = "");
	void WriteName(const QString& name);
private:
	Ui::LotteryClass ui;
	QList<QString> myNames;
	QList<QString> mySuccessNames;
	QTimer myTimer;
};

#endif // LOTTERY_H
