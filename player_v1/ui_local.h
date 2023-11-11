/********************************************************************************
** Form generated from reading UI file 'local.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCAL_H
#define UI_LOCAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_local
{
public:
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *num_of_songs;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QListWidget *listWidget;
    QLineEdit *lineEdit;

    void setupUi(QWidget *local)
    {
        if (local->objectName().isEmpty())
            local->setObjectName(QString::fromUtf8("local"));
        local->resize(840, 461);
        label = new QLabel(local);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 72, 15));
        label_2 = new QLabel(local);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 72, 15));
        num_of_songs = new QLCDNumber(local);
        num_of_songs->setObjectName(QString::fromUtf8("num_of_songs"));
        num_of_songs->setGeometry(QRect(70, 30, 64, 23));
        label_3 = new QLabel(local);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 30, 72, 15));
        pushButton = new QPushButton(local);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 30, 93, 28));
        label_4 = new QLabel(local);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 72, 15));
        label_5 = new QLabel(local);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 60, 72, 15));
        label_6 = new QLabel(local);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 60, 72, 15));
        label_7 = new QLabel(local);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(500, 60, 72, 15));
        label_8 = new QLabel(local);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(670, 60, 72, 15));
        listWidget = new QListWidget(local);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 80, 821, 351));
        lineEdit = new QLineEdit(local);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(530, 30, 113, 21));

        retranslateUi(local);

        QMetaObject::connectSlotsByName(local);
    } // setupUi

    void retranslateUi(QWidget *local)
    {
        local->setWindowTitle(QCoreApplication::translate("local", "Form", nullptr));
        label->setText(QCoreApplication::translate("local", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        label_2->setText(QCoreApplication::translate("local", "\346\234\254\345\234\260\345\205\261\346\234\211", nullptr));
        label_3->setText(QCoreApplication::translate("local", "\351\246\226\346\255\214\346\233\262", nullptr));
        pushButton->setText(QCoreApplication::translate("local", "\351\200\211\346\213\251\346\226\207\344\273\266\345\244\271", nullptr));
        label_4->setText(QCoreApplication::translate("local", "\351\237\263\344\271\220\346\240\207\351\242\230", nullptr));
        label_5->setText(QCoreApplication::translate("local", "\346\255\214\346\211\213", nullptr));
        label_6->setText(QCoreApplication::translate("local", "\344\270\223\350\276\221", nullptr));
        label_7->setText(QCoreApplication::translate("local", "\346\227\266\351\225\277", nullptr));
        label_8->setText(QCoreApplication::translate("local", "\345\244\247\345\260\217", nullptr));
        lineEdit->setText(QCoreApplication::translate("local", "\346\220\234\347\264\242\346\234\254\345\234\260\346\255\214\346\233\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class local: public Ui_local {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCAL_H
