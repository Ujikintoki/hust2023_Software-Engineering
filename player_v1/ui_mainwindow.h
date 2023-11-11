/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <setuser.h>
#include "videoslider.h"
#include "videowidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *mainlLayout;
    QHBoxLayout *titleLayout;
    QHBoxLayout *logoLayout;
    QLabel *label;
    QWidget *searchWidgt;
    QHBoxLayout *searchLayout;
    QLineEdit *lineEdit;
    QPushButton *rightButton;
    QHBoxLayout *userLayout;
    QLabel *userNameLabel;
    QPushButton *iconButton;
    QHBoxLayout *operateLayout;
    QPushButton *minButton;
    QPushButton *maxiButton;
    QPushButton *closeButton;
    QHBoxLayout *screenlLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *toPlaylistButton;
    QPushButton *select_file;
    QSpacerItem *verticalSpacer_6;
    QStackedWidget *stackedWidget;
    QWidget *logwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lable;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QLineEdit *username1;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QLineEdit *userpassword;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logButton;
    QPushButton *regButton;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    VideoWidget *screenWidget;
    QWidget *firstpage;
    QWidget *userpage;
    QWidget *userwidget;
    QPushButton *sign_button;
    QPushButton *Personality_set_button;
    QPushButton *logout_button;
    QGraphicsView *self_picture;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QWidget *MusicPage;
    QTableWidget *MusicTable;
    setuser *setuserpage;
    QWidget *searchPage;
    QTableWidget *searchResultTable;
    QHBoxLayout *bottomLayout;
    QHBoxLayout *informationLayout;
    QLabel *FileName;
    QVBoxLayout *progressLayout;
    QHBoxLayout *sliderLayout;
    VideoSlider *processSlider;
    QLabel *playTimeLabel;
    QLabel *durationTimeLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *fullscreen;
    QSpacerItem *horizontalSpacer;
    QPushButton *shutButton;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *playButton;
    QHBoxLayout *volumeLayout;
    QPushButton *muteBtn;
    VideoSlider *volumeSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1250, 790);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mainlLayout = new QVBoxLayout();
        mainlLayout->setObjectName(QString::fromUtf8("mainlLayout"));
        mainlLayout->setContentsMargins(1, 1, 1, 1);
        titleLayout = new QHBoxLayout();
        titleLayout->setSpacing(20);
        titleLayout->setObjectName(QString::fromUtf8("titleLayout"));
        titleLayout->setContentsMargins(20, 20, 20, 20);
        logoLayout = new QHBoxLayout();
        logoLayout->setObjectName(QString::fromUtf8("logoLayout"));
        logoLayout->setContentsMargins(30, -1, 30, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images1/logo(1)(1).png")));

        logoLayout->addWidget(label);


        titleLayout->addLayout(logoLayout);

        searchWidgt = new QWidget(centralwidget);
        searchWidgt->setObjectName(QString::fromUtf8("searchWidgt"));
        searchLayout = new QHBoxLayout(searchWidgt);
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchLayout->setContentsMargins(5, -1, 5, -1);
        lineEdit = new QLineEdit(searchWidgt);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        searchLayout->addWidget(lineEdit);

        rightButton = new QPushButton(searchWidgt);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images2/sousuo2.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightButton->setIcon(icon);

        searchLayout->addWidget(rightButton);

        searchLayout->setStretch(0, 4);

        titleLayout->addWidget(searchWidgt);

        userLayout = new QHBoxLayout();
        userLayout->setObjectName(QString::fromUtf8("userLayout"));
        userLayout->setContentsMargins(30, -1, 30, -1);
        userNameLabel = new QLabel(centralwidget);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userNameLabel->sizePolicy().hasHeightForWidth());
        userNameLabel->setSizePolicy(sizePolicy);

        userLayout->addWidget(userNameLabel);

        iconButton = new QPushButton(centralwidget);
        iconButton->setObjectName(QString::fromUtf8("iconButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images2/touxiang.png"), QSize(), QIcon::Normal, QIcon::Off);
        iconButton->setIcon(icon1);
        iconButton->setCheckable(true);
        iconButton->setChecked(true);

        userLayout->addWidget(iconButton);

        userLayout->setStretch(0, 4);

        titleLayout->addLayout(userLayout);

        operateLayout = new QHBoxLayout();
        operateLayout->setSpacing(20);
        operateLayout->setObjectName(QString::fromUtf8("operateLayout"));
        operateLayout->setContentsMargins(20, 10, 20, 10);
        minButton = new QPushButton(centralwidget);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        sizePolicy.setHeightForWidth(minButton->sizePolicy().hasHeightForWidth());
        minButton->setSizePolicy(sizePolicy);
        minButton->setMaximumSize(QSize(50, 50));
        minButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images2/min_hei.png"), QSize(), QIcon::Normal, QIcon::Off);
        minButton->setIcon(icon2);

        operateLayout->addWidget(minButton);

        maxiButton = new QPushButton(centralwidget);
        maxiButton->setObjectName(QString::fromUtf8("maxiButton"));
        maxiButton->setEnabled(true);
        sizePolicy.setHeightForWidth(maxiButton->sizePolicy().hasHeightForWidth());
        maxiButton->setSizePolicy(sizePolicy);
        maxiButton->setMaximumSize(QSize(50, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images2/max_hei.png"), QSize(), QIcon::Normal, QIcon::Off);
        maxiButton->setIcon(icon3);

        operateLayout->addWidget(maxiButton);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMaximumSize(QSize(50, 50));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images2/quit_hei.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon4);

        operateLayout->addWidget(closeButton);


        titleLayout->addLayout(operateLayout);

        titleLayout->setStretch(0, 2);
        titleLayout->setStretch(1, 3);
        titleLayout->setStretch(2, 3);
        titleLayout->setStretch(3, 2);

        mainlLayout->addLayout(titleLayout);

        screenlLayout = new QHBoxLayout();
        screenlLayout->setSpacing(1);
        screenlLayout->setObjectName(QString::fromUtf8("screenlLayout"));
        screenlLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, 20);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images2/systemTray.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);

        verticalLayout->addWidget(pushButton);

        toPlaylistButton = new QPushButton(centralwidget);
        toPlaylistButton->setObjectName(QString::fromUtf8("toPlaylistButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images1/playlist-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        toPlaylistButton->setIcon(icon6);

        verticalLayout->addWidget(toPlaylistButton);

        select_file = new QPushButton(centralwidget);
        select_file->setObjectName(QString::fromUtf8("select_file"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images2/mini_hei.png"), QSize(), QIcon::Normal, QIcon::Off);
        select_file->setIcon(icon7);

        verticalLayout->addWidget(select_file);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        screenlLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(800, 0));
        logwidget = new QWidget();
        logwidget->setObjectName(QString::fromUtf8("logwidget"));
        verticalLayoutWidget_2 = new QWidget(logwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(260, 70, 371, 291));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lable = new QLabel(verticalLayoutWidget_2);
        lable->setObjectName(QString::fromUtf8("lable"));

        horizontalLayout_2->addWidget(lable);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        username1 = new QLineEdit(verticalLayoutWidget_2);
        username1->setObjectName(QString::fromUtf8("username1"));

        horizontalLayout_3->addWidget(username1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        userpassword = new QLineEdit(verticalLayoutWidget_2);
        userpassword->setObjectName(QString::fromUtf8("userpassword"));

        horizontalLayout_4->addWidget(userpassword);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        logButton = new QPushButton(verticalLayoutWidget_2);
        logButton->setObjectName(QString::fromUtf8("logButton"));

        horizontalLayout_5->addWidget(logButton);

        regButton = new QPushButton(verticalLayoutWidget_2);
        regButton->setObjectName(QString::fromUtf8("regButton"));

        horizontalLayout_5->addWidget(regButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(logwidget);
        screenWidget = new VideoWidget();
        screenWidget->setObjectName(QString::fromUtf8("screenWidget"));
        stackedWidget->addWidget(screenWidget);
        firstpage = new QWidget();
        firstpage->setObjectName(QString::fromUtf8("firstpage"));
        stackedWidget->addWidget(firstpage);
        userpage = new QWidget();
        userpage->setObjectName(QString::fromUtf8("userpage"));
        userwidget = new QWidget(userpage);
        userwidget->setObjectName(QString::fromUtf8("userwidget"));
        userwidget->setGeometry(QRect(0, 0, 981, 511));
        sign_button = new QPushButton(userwidget);
        sign_button->setObjectName(QString::fromUtf8("sign_button"));
        sign_button->setGeometry(QRect(420, 170, 93, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Cascadia Code"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        sign_button->setFont(font);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../images1/like-hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        sign_button->setIcon(icon8);
        Personality_set_button = new QPushButton(userwidget);
        Personality_set_button->setObjectName(QString::fromUtf8("Personality_set_button"));
        Personality_set_button->setGeometry(QRect(320, 280, 299, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Constantia"));
        font1.setPointSize(10);
        Personality_set_button->setFont(font1);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../images1/\344\270\252\344\272\272\344\277\241\346\201\257.png"), QSize(), QIcon::Normal, QIcon::Off);
        Personality_set_button->setIcon(icon9);
        Personality_set_button->setIconSize(QSize(32, 32));
        logout_button = new QPushButton(userwidget);
        logout_button->setObjectName(QString::fromUtf8("logout_button"));
        logout_button->setGeometry(QRect(320, 340, 299, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calisto MT"));
        font2.setPointSize(10);
        logout_button->setFont(font2);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../images1/\351\200\200\345\207\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_button->setIcon(icon10);
        logout_button->setIconSize(QSize(32, 32));
        self_picture = new QGraphicsView(userwidget);
        self_picture->setObjectName(QString::fromUtf8("self_picture"));
        self_picture->setGeometry(QRect(400, 60, 131, 101));
        label_2 = new QLabel(userwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 220, 41, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Math TeX Gyre"));
        font3.setPointSize(11);
        label_2->setFont(font3);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setTextFormat(Qt::RichText);
        textBrowser = new QTextBrowser(userwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(380, 230, 241, 51));
        stackedWidget->addWidget(userpage);
        MusicPage = new QWidget();
        MusicPage->setObjectName(QString::fromUtf8("MusicPage"));
        MusicTable = new QTableWidget(MusicPage);
        MusicTable->setObjectName(QString::fromUtf8("MusicTable"));
        MusicTable->setGeometry(QRect(0, 0, 981, 511));
        MusicTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"	background: transparent;\n"
"	border: none;\n"
"	alternate-background-color: rgba(132, 136, 139, 20);\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section\n"
"{\n"
"	background:transparent;\n"
"}\n"
""));
        stackedWidget->addWidget(MusicPage);
        setuserpage = new setuser();
        setuserpage->setObjectName(QString::fromUtf8("setuserpage"));
        stackedWidget->addWidget(setuserpage);
        searchPage = new QWidget();
        searchPage->setObjectName(QString::fromUtf8("searchPage"));
        searchResultTable = new QTableWidget(searchPage);
        searchResultTable->setObjectName(QString::fromUtf8("searchResultTable"));
        searchResultTable->setGeometry(QRect(0, 0, 981, 511));
        searchResultTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"	background: transparent;\n"
"	border: none;\n"
"	alternate-background-color: rgba(132, 136, 139, 20);\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QTableView QTableCornerButton::section\n"
"{\n"
"	background:transparent;\n"
"}\n"
""));
        searchResultTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        searchResultTable->setAlternatingRowColors(true);
        searchResultTable->setShowGrid(false);
        stackedWidget->addWidget(searchPage);

        screenlLayout->addWidget(stackedWidget);

        screenlLayout->setStretch(0, 1);
        screenlLayout->setStretch(1, 4);

        mainlLayout->addLayout(screenlLayout);

        bottomLayout = new QHBoxLayout();
        bottomLayout->setObjectName(QString::fromUtf8("bottomLayout"));
        bottomLayout->setContentsMargins(20, 20, 20, 20);
        informationLayout = new QHBoxLayout();
        informationLayout->setObjectName(QString::fromUtf8("informationLayout"));
        informationLayout->setContentsMargins(20, 20, 20, 20);
        FileName = new QLabel(centralwidget);
        FileName->setObjectName(QString::fromUtf8("FileName"));
        FileName->setEnabled(true);
        sizePolicy.setHeightForWidth(FileName->sizePolicy().hasHeightForWidth());
        FileName->setSizePolicy(sizePolicy);
        FileName->setMinimumSize(QSize(0, 0));
        FileName->setMaximumSize(QSize(105, 30));

        informationLayout->addWidget(FileName);


        bottomLayout->addLayout(informationLayout);

        progressLayout = new QVBoxLayout();
        progressLayout->setObjectName(QString::fromUtf8("progressLayout"));
        progressLayout->setContentsMargins(10, 10, 10, 10);
        sliderLayout = new QHBoxLayout();
        sliderLayout->setObjectName(QString::fromUtf8("sliderLayout"));
        sliderLayout->setContentsMargins(2, -1, 2, -1);
        processSlider = new VideoSlider(centralwidget);
        processSlider->setObjectName(QString::fromUtf8("processSlider"));
        processSlider->setMinimumSize(QSize(400, 0));
        processSlider->setOrientation(Qt::Horizontal);

        sliderLayout->addWidget(processSlider);

        playTimeLabel = new QLabel(centralwidget);
        playTimeLabel->setObjectName(QString::fromUtf8("playTimeLabel"));

        sliderLayout->addWidget(playTimeLabel);

        durationTimeLabel = new QLabel(centralwidget);
        durationTimeLabel->setObjectName(QString::fromUtf8("durationTimeLabel"));

        sliderLayout->addWidget(durationTimeLabel);

        sliderLayout->setStretch(0, 10);
        sliderLayout->setStretch(1, 1);
        sliderLayout->setStretch(2, 1);

        progressLayout->addLayout(sliderLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(30, -1, 30, -1);
        fullscreen = new QPushButton(centralwidget);
        fullscreen->setObjectName(QString::fromUtf8("fullscreen"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images2/maximize.png"), QSize(), QIcon::Normal, QIcon::Off);
        fullscreen->setIcon(icon11);

        horizontalLayout->addWidget(fullscreen);

        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        shutButton = new QPushButton(centralwidget);
        shutButton->setObjectName(QString::fromUtf8("shutButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images1/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        shutButton->setIcon(icon12);

        horizontalLayout->addWidget(shutButton);

        horizontalSpacer_10 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images1/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon13.addFile(QString::fromUtf8(":/images1/play.png"), QSize(), QIcon::Normal, QIcon::On);
        playButton->setIcon(icon13);
        playButton->setCheckable(true);

        horizontalLayout->addWidget(playButton);

        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(4, 1);

        progressLayout->addLayout(horizontalLayout);


        bottomLayout->addLayout(progressLayout);

        volumeLayout = new QHBoxLayout();
        volumeLayout->setObjectName(QString::fromUtf8("volumeLayout"));
        volumeLayout->setContentsMargins(30, -1, 30, -1);
        muteBtn = new QPushButton(centralwidget);
        muteBtn->setObjectName(QString::fromUtf8("muteBtn"));
        muteBtn->setMaximumSize(QSize(70, 16777215));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images1/volume-hover(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        icon14.addFile(QString::fromUtf8(":/images1/novolume.png"), QSize(), QIcon::Normal, QIcon::On);
        muteBtn->setIcon(icon14);
        muteBtn->setCheckable(true);

        volumeLayout->addWidget(muteBtn);

        volumeSlider = new VideoSlider(centralwidget);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setOrientation(Qt::Horizontal);

        volumeLayout->addWidget(volumeSlider);

        volumeLayout->setStretch(0, 1);
        volumeLayout->setStretch(1, 5);

        bottomLayout->addLayout(volumeLayout);

        bottomLayout->setStretch(0, 1);
        bottomLayout->setStretch(1, 3);
        bottomLayout->setStretch(2, 1);

        mainlLayout->addLayout(bottomLayout);

        mainlLayout->setStretch(0, 1);
        mainlLayout->setStretch(1, 10);
        mainlLayout->setStretch(2, 1);

        horizontalLayout_6->addLayout(mainlLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1250, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        rightButton->setText(QString());
        userNameLabel->setText(QCoreApplication::translate("MainWindow", "\346\234\252\347\231\273\345\275\225", nullptr));
        iconButton->setText(QString());
        minButton->setText(QString());
        maxiButton->setText(QString());
        closeButton->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\241\265", nullptr));
        toPlaylistButton->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        select_file->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\346\226\207\344\273\266", nullptr));
        lable->setText(QCoreApplication::translate("MainWindow", "\350\257\267\347\231\273\345\275\225", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "  \345\257\206\347\240\201  ", nullptr));
        logButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        regButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        sign_button->setText(QCoreApplication::translate("MainWindow", "\347\255\276\345\210\260", nullptr));
        Personality_set_button->setText(QCoreApplication::translate("MainWindow", "   \344\270\252\344\272\272\344\277\241\346\201\257\350\256\276\347\275\256          >", nullptr));
        logout_button->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "   \346\230\265\347\247\260", nullptr));
        FileName->setText(QString());
        playTimeLabel->setText(QCoreApplication::translate("MainWindow", "0:00", nullptr));
        durationTimeLabel->setText(QCoreApplication::translate("MainWindow", "0:00", nullptr));
        fullscreen->setText(QString());
        shutButton->setText(QString());
        playButton->setText(QString());
        muteBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
