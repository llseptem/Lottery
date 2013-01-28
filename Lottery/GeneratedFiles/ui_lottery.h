/********************************************************************************
** Form generated from reading UI file 'lottery.ui'
**
** Created: Mon Jan 28 11:36:46 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTTERY_H
#define UI_LOTTERY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LotteryClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *nameLabel;
    QLabel *numLabel;
    QLabel *tipLabel;

    void setupUi(QWidget *LotteryClass)
    {
        if (LotteryClass->objectName().isEmpty())
            LotteryClass->setObjectName(QString::fromUtf8("LotteryClass"));
        LotteryClass->resize(691, 522);
        verticalLayout = new QVBoxLayout(LotteryClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LotteryClass);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        nameLabel = new QLabel(LotteryClass);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nameLabel);

        numLabel = new QLabel(LotteryClass);
        numLabel->setObjectName(QString::fromUtf8("numLabel"));

        verticalLayout->addWidget(numLabel);

        tipLabel = new QLabel(LotteryClass);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));

        verticalLayout->addWidget(tipLabel);

        verticalLayout->setStretch(1, 2);

        retranslateUi(LotteryClass);

        QMetaObject::connectSlotsByName(LotteryClass);
    } // setupUi

    void retranslateUi(QWidget *LotteryClass)
    {
        LotteryClass->setWindowTitle(QApplication::translate("LotteryClass", "\346\212\275\345\245\226", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LotteryClass", "<html><head/><body><p><span style=\" font-size:36pt; color:#ff0000;\">\345\270\270\345\267\236\345\270\202\345\214\227\351\203\212\345\210\235\347\272\247\344\270\255\345\255\246\346\226\260\346\230\245\350\201\224\346\254\242\344\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QString());
        numLabel->setText(QApplication::translate("LotteryClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        tipLabel->setText(QApplication::translate("LotteryClass", "\345\215\225\345\207\273Space\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LotteryClass: public Ui_LotteryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTTERY_H
