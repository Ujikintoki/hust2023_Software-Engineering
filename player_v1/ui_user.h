/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QPushButton *Personality_set_button;
    QPushButton *logout_button;
    QLabel *label;
    QTextBrowser *textBrowser;
    QGraphicsView *self_picture;
    QPushButton *sign_button;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(1001, 686);
        Personality_set_button = new QPushButton(User);
        Personality_set_button->setObjectName(QString::fromUtf8("Personality_set_button"));
        Personality_set_button->setGeometry(QRect(0, 240, 299, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Constantia"));
        font.setPointSize(10);
        Personality_set_button->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images1/\344\270\252\344\272\272\344\277\241\346\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        Personality_set_button->setIcon(icon);
        Personality_set_button->setIconSize(QSize(32, 32));
        logout_button = new QPushButton(User);
        logout_button->setObjectName(QString::fromUtf8("logout_button"));
        logout_button->setGeometry(QRect(0, 300, 299, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calisto MT"));
        font1.setPointSize(10);
        logout_button->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images1/\351\200\200\345\207\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_button->setIcon(icon1);
        logout_button->setIconSize(QSize(32, 32));
        label = new QLabel(User);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 180, 41, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Math TeX Gyre"));
        font2.setPointSize(11);
        label->setFont(font2);
        label->setFrameShadow(QFrame::Raised);
        label->setTextFormat(Qt::RichText);
        textBrowser = new QTextBrowser(User);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 190, 241, 51));
        self_picture = new QGraphicsView(User);
        self_picture->setObjectName(QString::fromUtf8("self_picture"));
        self_picture->setGeometry(QRect(80, 20, 131, 101));
        sign_button = new QPushButton(User);
        sign_button->setObjectName(QString::fromUtf8("sign_button"));
        sign_button->setGeometry(QRect(100, 130, 93, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cascadia Code"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        sign_button->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../images1/like-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        sign_button->setIcon(icon2);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Form", nullptr));
        Personality_set_button->setText(QCoreApplication::translate("User", "   \344\270\252\344\272\272\344\277\241\346\201\257\350\256\276\347\275\256          >", nullptr));
        logout_button->setText(QCoreApplication::translate("User", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("User", "   \346\230\265\347\247\260", nullptr));
        sign_button->setText(QCoreApplication::translate("User", "\347\255\276\345\210\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
