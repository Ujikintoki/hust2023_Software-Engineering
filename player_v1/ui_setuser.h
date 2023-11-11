/********************************************************************************
** Form generated from reading UI file 'setuser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUSER_H
#define UI_SETUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setuser
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_11;
    QPushButton *pushButton;
    QLineEdit *nicheng;
    QLineEdit *tradition;
    QLineEdit *musiclabel;

    void setupUi(QWidget *setuser)
    {
        if (setuser->objectName().isEmpty())
            setuser->setObjectName(QString::fromUtf8("setuser"));
        setuser->resize(840, 461);
        label = new QLabel(setuser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka"));
        font.setPointSize(16);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(setuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 51, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka"));
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_3 = new QLabel(setuser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 120, 51, 31));
        label_3->setFont(font1);
        label_11 = new QLabel(setuser);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 290, 91, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sitka"));
        font2.setPointSize(12);
        label_11->setFont(font2);
        pushButton = new QPushButton(setuser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 367, 91, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Palatino Linotype"));
        pushButton->setFont(font3);
        nicheng = new QLineEdit(setuser);
        nicheng->setObjectName(QString::fromUtf8("nicheng"));
        nicheng->setGeometry(QRect(110, 70, 481, 31));
        tradition = new QLineEdit(setuser);
        tradition->setObjectName(QString::fromUtf8("tradition"));
        tradition->setGeometry(QRect(110, 130, 481, 151));
        musiclabel = new QLineEdit(setuser);
        musiclabel->setObjectName(QString::fromUtf8("musiclabel"));
        musiclabel->setGeometry(QRect(110, 300, 481, 31));

        retranslateUi(setuser);

        QMetaObject::connectSlotsByName(setuser);
    } // setupUi

    void retranslateUi(QWidget *setuser)
    {
        setuser->setWindowTitle(QCoreApplication::translate("setuser", "Form", nullptr));
        label->setText(QCoreApplication::translate("setuser", "\347\274\226\350\276\221\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("setuser", "\346\230\265\347\247\260  \357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("setuser", "\344\273\213\347\273\215  \357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("setuser", "\351\237\263\344\271\220\346\240\207\347\255\276\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("setuser", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setuser: public Ui_setuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUSER_H
