#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QMouseEvent>
#include <QEvent>
#include <QPalette>
#include <QTimer>
#include <QTableWidget>
#include <QTabWidget>
#include <QPushButton>
#include <QMap>
#include <QPainter>
#include <QPaintEvent>
#include <QLabel> // 用来显示当前播放歌曲
#include <QDir>
#include <QListWidgetItem>
#include <QSlider>  // 音量进度条
#include <QLineEdit>
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPaintEvent>
#include "videoplayer.h"
#include "videoslider.h"
#include "global.h"
#include "user.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    //void mousePressEvent(QMouseEvent *event)override;
public:
    MainWindow(QWidget *parent = nullptr);
    int playsource=0;
    ~MainWindow();
    enum PlayCirecleMode
    {
      OrderList,    // 顺序

    };
    /*void keyPressEvent(QKeyEvent *event) override
    {
        if(event->key()==Qt::Key_Escape){
          this->showNormal();
        }
    }*/

private slots:

    void onPlayerStateChanged(VideoPlayer *player);

    void onPlayerTimeChanged(VideoPlayer *player);

    void onPlayerInitFinished(VideoPlayer *player);

    void onPlayerPlayFailed(VideoPlayer *player);

    void on_shutButton_clicked();

    void on_volumeSlider_valueChanged(int value);

    void on_processSlider_valueChanged(int value);

    void on_playButton_clicked();

    void onSliderClicked(VideoSlider *slider);

    void on_select_file_clicked();

    //void on_maxiButton_clicked();

    void on_muteBtn_clicked();

    void on_iconButton_clicked(bool checked);




    void on_rightButton_clicked();

    void on_lineEdit_returnPressed();

    void on_searchResultTable_itemActivated(QTableWidgetItem *item);

    //void on_toPlaylistButton_clicked();

    void on_Personality_set_button_clicked();

    void on_pushButton_clicked();

    void on_searchResultTable_itemDoubleClicked(QTableWidgetItem *item);

    void on_logButton_clicked();

    void on_regButton_clicked();

    void fullscreen();

    void on_MusicTable_itemDoubleClicked(QTableWidgetItem *item);

    void on_toPlaylistButton_clicked();

    void keyPressEvent(QKeyEvent *event);



    //void on_maxiButton_clicked(bool checked);

    void on_maxiButton_pressed();

    void on_logout_button_clicked();

private:

    bool isfull=false;

    SongList searchResultSongs;

    PlayListList searchResultPlayLists;

    Ui::MainWindow *ui;

    VideoPlayer *_player;

    QString msecondToString(qint64 msecond);
    void activeSong(Music music);
    bool isNotPlaying() const;
    int onMusicAppendRandom = 0;
    int lyricScroll;

    QSettings settings;
    QDir musicFileDir;   // 用于程序识别
    const QString API_DOMAIN = "http://iwxyi.com:3000/";

    Music playingSong;//现在在播放的音乐

    QMediaPlayer *player;// 播放器

    QString songPath(const Music &music) const;

    QString getTimeText(int value);

    void searchMusic(QString key);

    void setSearchResultTable(SongList songs);

    void playSong(Music music);

    void setPlayListTable(QList<Music> songs, QTableWidget* table);

    bool isSongDownloaded(Music music);

    void playLocalSong(Music music);

    QSystemTrayIcon *mySystemTray;

    QAction *music_info;

    Music playAfterDownloaded;

    void downloadSong(Music music);

    SongList localSongs;

    void saveSongList(QString key, const SongList &songs);

    Music downloadingSong;

    void downloadNext();

    SongList orderSongs;         //播放列表

    void playNext();

    SongList toDownLoadSongs;        // 即将下载

    PlayCirecleMode circleMode = OrderList;

    void appendNextSongs(SongList musics);

    void turntofirst();

    user* users;

signals:

    void signalOrderSongPlayed(Music music);
    //void escShut();

    void signalSongPlayStarted(Music music);
    void signalSongPlayFinished(Music music);
    void signalSongDownLoadFinished(Music music);

};
#endif // MAINWINDOW_H
