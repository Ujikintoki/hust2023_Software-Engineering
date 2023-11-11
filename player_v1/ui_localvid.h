/********************************************************************************
** Form generated from reading UI file 'localvid.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCALVID_H
#define UI_LOCALVID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_localvid
{
public:
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QListWidget *listWidget;

    void setupUi(QWidget *localvid)
    {
        if (localvid->objectName().isEmpty())
            localvid->setObjectName(QString::fromUtf8("localvid"));
        localvid->resize(840, 461);
        label = new QLabel(localvid);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 72, 15));
        label_2 = new QLabel(localvid);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 72, 15));
        lcdNumber = new QLCDNumber(localvid);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(70, 40, 64, 23));
        label_3 = new QLabel(localvid);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 40, 72, 15));
        pushButton = new QPushButton(localvid);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(730, 40, 93, 28));
        lineEdit = new QLineEdit(localvid);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(590, 40, 113, 21));
        label_4 = new QLabel(localvid);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 72, 15));
        label_5 = new QLabel(localvid);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(610, 90, 72, 15));
        label_6 = new QLabel(localvid);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(760, 90, 72, 15));
        listWidget = new QListWidget(localvid);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 110, 811, 331));

        retranslateUi(localvid);

        QMetaObject::connectSlotsByName(localvid);
    } // setupUi

    void retranslateUi(QWidget *localvid)
    {
        localvid->setWindowTitle(QCoreApplication::translate("localvid", "Form", nullptr));
        label->setText(QCoreApplication::translate("localvid", "\346\234\254\345\234\260\350\247\206\351\242\221", nullptr));
        label_2->setText(QCoreApplication::translate("localvid", "\346\234\254\345\234\260\345\205\261\346\234\211", nullptr));
        label_3->setText(QCoreApplication::translate("localvid", "\344\270\252\350\247\206\351\242\221", nullptr));
        pushButton->setText(QCoreApplication::translate("localvid", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        lineEdit->setText(QCoreApplication::translate("localvid", "\346\220\234\347\264\242\346\234\254\345\234\260\350\247\206\351\242\221", nullptr));
        label_4->setText(QCoreApplication::translate("localvid", "\350\247\206\351\242\221\345\220\215\347\247\260", nullptr));
        label_5->setText(QCoreApplication::translate("localvid", "\346\227\266\351\225\277", nullptr));
        label_6->setText(QCoreApplication::translate("localvid", "\345\244\247\345\260\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class localvid: public Ui_localvid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCALVID_H
