QT       += core gui sql network multimedia
QT       += sql                #数据库
QT       += multimedia
QT       += network            #联网
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    condmutex.cpp \
    local.cpp \
    mainwindow.cpp \
    music.cpp \
    person.cpp \
    setuser.cpp \
    user.cpp \
    videoplayer.cpp \
    videoplayer_audio.cpp \
    videoplayer_video.cpp \
    videoslider.cpp \
    videowidget.cpp

HEADERS += \
    HistoryData.h \
    Jsoninfo.h \
    condmutex.h \
    global.h \
    loadqssfile.h \
    local.h \
    mainwindow.h \
    musicinfo.h \
    person.h \
    setuser.h \
    user.h \
    videoplayer.h \
    videoslider.h \
    videowidget.h

FORMS += \
    mainwindow.ui \
    setuser.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#FFMPEG_HOME = D:\ffmpeg-4.3.2-2021-02-27-full_build-shared\ffmpeg-4.3.2-2021-02-27-full_build-shared
#FFMPEG_HOME = C:\ffmpeg-4.3.2-2021-02-27-full_build-shared
#FFMPEG_HOME = C:\Users\86183\Desktop\ffmpeg-4.3.2-2021-02-27-full_build-shared\ffmpeg-4.3.2-2021-02-27-full_build-shared
#FFMPEG_HOME = D:\Chenhao\Study\ffmpeg
#FFMPEG_HOME = E:\ffmpeg_SDL\ffmpeg-4.3.2-2021-02-27-full_build-shared\ffmpeg-4.3.2-2021-02-27-full_build-shared
FFMPEG_HOME = .\include

INCLUDEPATH += $${FFMPEG_HOME}/include

LIBS += -L $${FFMPEG_HOME}/lib \
        -lavcodec \
        -lavdevice \
        -lavfilter \
        -lavformat \
        -lavutil \
        -lpostproc \
        -lSDL2 \
        -lswresample \
        -lswscale

RESOURCES += \
    resource.qrc
