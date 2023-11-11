#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "videoplayer.h"
#include "videoslider.h"
#include "global.h"
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include "videowidget.h"
#include <QGuiApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    player(new QMediaPlayer(this))
{
    qRegisterMetaType<VideoPlayer::VideoSwsSpec>("VideoSwsSpec&");
    //this->grabKeyboard();
    ui->setupUi(this);
    //setFixedSize(width(),height());
    setWindowFlags(Qt::FramelessWindowHint /*| Qt::WindowSystemMenuHint*/ | Qt::WindowMinimizeButtonHint);  //这行关闭系统边框
    // 创建播放器
    _player = new VideoPlayer();
    users=new user();
    connect(_player, &VideoPlayer::stateChanged,
            this, &MainWindow::onPlayerStateChanged);
    connect(_player, &VideoPlayer::timeChanged,
            this, &MainWindow::onPlayerTimeChanged);
    connect(_player, &VideoPlayer::initFinished,
            this, &MainWindow::onPlayerInitFinished);
    connect(_player, &VideoPlayer::playFailed,
            this, &MainWindow::onPlayerPlayFailed);

    connect(ui->maxiButton, &QPushButton::clicked, this, &MainWindow::on_maxiButton_pressed); //这三行加入最大最小化与关闭窗口的功能
    connect(ui->minButton, &QPushButton::clicked, this, &MainWindow::showMinimized);
    connect(ui->closeButton, &QPushButton::clicked, this, &MainWindow::close);

    connect(_player, &VideoPlayer::frameDecoded,
            ui->screenWidget, &VideoWidget::onPlayerFrameDecoded);
    connect(_player, &VideoPlayer::stateChanged,
            ui->screenWidget, &VideoWidget::onPlayerStateChanged);
    //全屏显示
    connect(ui->fullscreen,SIGNAL(clicked()),this,SLOT(fullscreen()));
    //链接信号与槽
    connect(_player, &VideoPlayer::initFinished,this, &MainWindow::onPlayerInitFinished);

    // 监听时间滑块的点击
    connect(ui->processSlider, &VideoSlider::clicked,
            this, &MainWindow::onSliderClicked);
    //connect(ui->screenWidget,SIGNAL(clicked()),this,SLOT(escShut()));
    // 设置音量滑块的范围
    ui->volumeSlider->setRange(VideoPlayer::Volumn::Min,
                               VideoPlayer::Volumn::Max);
    ui->volumeSlider->setValue(ui->volumeSlider->maximum() >> 3); //初始值设为1/8

}

MainWindow::~MainWindow()
{
    delete ui;
    delete _player;
}

void MainWindow::on_shutButton_clicked()
{
    if(playsource==1)
        _player->stop();
    else
        player->stop();
        ui->FileName->setText("");
    ui->stackedWidget->setCurrentWidget(ui->firstpage);
}

/*void MainWindow::escShut(){
    ui->screenWidget->showMinimized();
}*/

void MainWindow::on_volumeSlider_valueChanged(int value)
{
    //设置文本
    _player->setVolumn(value);
}

void MainWindow::on_processSlider_valueChanged(int value)  //进度条
{
    ui->playTimeLabel->setText(getTimeText(value));
}

void MainWindow::on_playButton_clicked()
{
    VideoPlayer::State state = _player->getState();
    if (state == VideoPlayer::Playing) {
        _player->pause();
    } else {
        //ui->stackedWidget->setCurrentWidget(ui->screenWidget);
        _player->play();
    }
    if (player->state() == QMediaPlayer::PlayingState)
    {
        state == VideoPlayer::Stopped;
        ui->playButton->setEnabled(false);
        ui->shutButton->setEnabled(false);
        ui->processSlider->setEnabled(false);
        ui->volumeSlider->setEnabled(false);
        ui->durationTimeLabel->setText(getTimeText(0));
        ui->processSlider->setValue(0);
        player->pause();
//        ui->play_button->setIcon(QIcon(":/icon/play"));
    }
    else
    {
        state == VideoPlayer::Playing;
        player->play();
        ui->playButton->setEnabled(true);
        ui->shutButton->setEnabled(true);
        ui->processSlider->setEnabled(true);
        ui->volumeSlider->setEnabled(true);
//        ui->play_button->setIcon(QIcon(":icon/pause"));
    }
}

void MainWindow::onPlayerInitFinished(VideoPlayer *player){
    int duration = player->getDuration();

    // 设置slider的范围
    ui->processSlider->setRange(0, duration);
    
    ui->durationTimeLabel->setText(getTimeText(duration));
    
}

void MainWindow::onSliderClicked(VideoSlider *slider) {
    _player->setTime(slider->value());
}

QString MainWindow::getTimeText(int value) {
    //    int h = seconds / 3600;
    //    int m = (seconds % 3600) / 60;
    //    int m = (seconds / 60) % 60;
    //    int s = seconds % 60;


//    QString h = QString("0%1").arg(seconds / 3600).right(2);
//    QString m = QString("0%1").arg((seconds / 60) % 60).right(2);
//    QString s = QString("0%1").arg(seconds % 60).right(2);
//    return QString("%1:%2:%3").arg(h).arg(m).arg(s);

    QLatin1Char fill = QLatin1Char('0');
    return QString("%1:%2:%3")
           .arg(value / 3600, 2, 10, fill)
           .arg((value / 60) % 60, 2, 10, fill)
           .arg(value % 60, 2, 10, fill);
}

QString MainWindow::msecondToString(qint64 msecond)
{
    return QString("%1:%2").arg(msecond / 1000 / 60, 2, 10, QLatin1Char('0'))
            .arg(msecond / 1000 % 60, 2, 10, QLatin1Char('0'));
}

void MainWindow::onPlayerPlayFailed(VideoPlayer *player) {
    QMessageBox::critical(nullptr, "提示", "播放失败！");
}

void MainWindow::onPlayerTimeChanged(VideoPlayer *player) {
    ui->processSlider->setValue(player->getTime());
}

void MainWindow::onPlayerStateChanged(VideoPlayer *player) {
    VideoPlayer::State state = player->getState();
    if (state == VideoPlayer::Playing) {
        ui->playButton->setText("暂停");
    } else {
        ui->playButton->setText("播放");
    }

    if (state == VideoPlayer::Stopped) {
        ui->playButton->setEnabled(false);
        ui->shutButton->setEnabled(false);
        ui->processSlider->setEnabled(false);
        ui->volumeSlider->setEnabled(false);

        ui->durationTimeLabel->setText(getTimeText(0));
        ui->processSlider->setValue(0);
    } else {
        ui->playButton->setEnabled(true);
        ui->shutButton->setEnabled(true);
        ui->processSlider->setEnabled(true);
        ui->volumeSlider->setEnabled(true);

    }
}

void MainWindow::on_select_file_clicked()
{
    on_shutButton_clicked();
    QString filename = QFileDialog::getOpenFileName(nullptr,
                       "选择多媒体文件",
                       "D:/",
                       "多媒体文件 (*.mp4 *.avi *.mkv *.mp3 *.aac)");
    if (filename.isEmpty())
        return;

    // 开始播放打开的文件
    _player->setFilename(filename);
    _player->play();
    ui->FileName->setText(filename);
    playsource=1;
    if(filename.contains(".mp4", Qt::CaseSensitive))
        ui->stackedWidget->setCurrentWidget(ui->screenWidget);
    if(filename.contains(".mkv", Qt::CaseSensitive))
        ui->stackedWidget->setCurrentWidget(ui->screenWidget);
    if(filename.contains(".avi", Qt::CaseSensitive))
        ui->stackedWidget->setCurrentWidget(ui->screenWidget);
//    QStringList filenames = QFileDialog::getOpenFileNames(nullptr,
//                            "选择多媒体文件",
//                            "/",
//                            "视频文件 (*.mp4 *.avi *.mkv);;"
//                            "音频文件 (*.mp3 *.aac)");
//    foreach (QString filename, filenames) {
//        qDebug() << filename;
//    }
}

void MainWindow::on_muteBtn_clicked() {
    if (_player->isMute()) {
        _player->setMute(false);
    } else {
        _player->setMute(true);
    }
}

//void MainWindow::on_maxiButton_clicked() {
//
//}



void MainWindow::on_iconButton_clicked(bool checked)
{
    if(!checked){
        if(users->getLogState())
            ui->stackedWidget->setCurrentWidget(ui->userpage);
        else
            ui->stackedWidget->setCurrentWidget(ui->logwidget);
    }
    else
        ui->stackedWidget->setCurrentWidget(ui->firstpage);
}
//
//搜索音乐
//
void MainWindow::searchMusic(QString key)
{
    if (key.trimmed().isEmpty())
        return;
    QString url = "http://iwxyi.com:3000/search?keywords=" + key.toUtf8().toPercentEncoding();
    QNetworkAccessManager* manager = new QNetworkAccessManager;
    QNetworkRequest* request = new QNetworkRequest(url);
    request->setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=UTF-8");
    request->setHeader(QNetworkRequest::UserAgentHeader, "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36");
    connect(manager, &QNetworkAccessManager::finished, this, [=](QNetworkReply* reply){
        QByteArray data = reply->readAll();
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(data, &error);
        if (error.error != QJsonParseError::NoError)
        {
            qDebug() << error.errorString();
            return;
        }

        QJsonObject json = document.object();
        if (json.value("code").toInt() != 200)
        {
            qDebug() << ("返回结果不为200：") << json.value("message").toString();
            return;
        }

        QJsonArray musics = json.value("result").toObject().value("songs").toArray();
        // 清除上次搜索结果
        searchResultSongs.clear();
        foreach (QJsonValue val, musics)
        {
            searchResultSongs << Music::fromJson(val.toObject());
        }

        setSearchResultTable(searchResultSongs);


    });
    manager->get(*request);

}
//
//搜索音乐到表格显示出来
//
void MainWindow::setSearchResultTable(SongList songs)
{
    // 建立表

    QTableWidget* table = ui->searchResultTable;
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    // 清空旧数据
    table->clear();
    searchResultPlayLists.clear();

    // 设置Table标题
    enum{
        titleCol,
        artistCol,
        albumCol,
        durationCol
    };
    table->setColumnCount(4);
    QStringList headers{"标题", "作者", "专辑", "时长"};
    table->setHorizontalHeaderLabels(headers);

    // 设置列长度
    QFontMetrics fm(font());
    int fw = fm.horizontalAdvance("一二三四五六七八九十十一十二十三十四十五");
    auto createItem = [=](QString s){
        QTableWidgetItem *item = new QTableWidgetItem();
        if (s.length() > 16 && fm.horizontalAdvance(s) > fw)
        {
            item->setToolTip(s);
            s = s.left(15) + "...";
        }
        item->setText(s);
        return item;
    };

    table->setRowCount(songs.size());
    for (int row = 0; row < songs.size(); row++)
    {
       Music song = songs.at(row);
       table->setItem(row, titleCol, createItem(song.name));
       table->setItem(row, artistCol, createItem(song.artistNames));
       table->setItem(row, albumCol, createItem(song.album.name));
       table->setItem(row, durationCol, createItem(msecondToString(song.duration)));
    }

    QTimer::singleShot(0, [=]{
        table->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    });
}

void MainWindow::setPlayListTable(QList<Music> songs, QTableWidget *table)
{
//    QTableWidget* table = ui->MusicTable;
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//    table->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
    table->clear();

    // 设置Table标题
    enum{
        titleCol,
        artistCol,
        albumCol,
        durationCol
    };
    table->setColumnCount(4);
    QStringList headers{"标题", "作者", "专辑", "时长"};
    table->setHorizontalHeaderLabels(headers);
    for (int i = 0; i < 4; i++)
    {
        table->horizontalHeaderItem(i)->setSizeHint(QSize(ui->firstpage->width() / 4, 32));
    }
    // 设置列长度
    QFontMetrics fm(font());
    int fw = fm.horizontalAdvance("一二三四五六七八九十十一十二十三十四十五");
    auto createItem = [=](QString s){
        QTableWidgetItem *item = new QTableWidgetItem();
        if (s.length() > 16 && fm.horizontalAdvance(s) > fw)
        {
            item->setToolTip(s);
            s = s.left(15) + "...";
        }
        item->setText(s);
        return item;
    };

    table->setRowCount(songs.size());
    for (int row = 0; row < songs.size(); row++)
    {
       Music song = songs.at(row);
       table->setItem(row, titleCol, createItem(song.name));
       table->setItem(row, artistCol, createItem(song.artistNames));
       table->setItem(row, albumCol, createItem(song.album.name));
       table->setItem(row, durationCol, createItem(msecondToString(song.duration)));
    }

    QTimer::singleShot(0, [=]{
        table->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    });

}

/*void MainWindow::setPLAYLISTTable(PlayListList playlist, QListWidget *list)
{
    ui->MusiclistWidget->clear();

    for (int index = 0; index < playlist.size(); index++)
    {
        ui->MusiclistWidget->addItem(playlist.at(index).name);
    }
}

void MainWindow::setPlaylistTab(PlayListList pl, QTabWidget *tab)
{
    ui->tabWidget->clear();
    for (int index = 0; index < pl.size(); index++)
    {
        QListView *QLV = new QListView(tab);
        tab->addTab(QLV, pl.at(index).name);
        QLV->setContextMenuPolicy(Qt::CustomContextMenu);
        QLV->setEditTriggers(QAbstractItemView::NoEditTriggers);
        connect(QLV, &QListView::customContextMenuRequested, this, [=](QPoint){
            ShowPlaylistTabMenu(QLV);
        });
        QStringList sl;
        foreach (Music music, pl.at(index).contiansMusic)
        {
            sl << music.simpleString();
        }
        QAbstractItemModel *model = QLV->model();
        if (model)
            delete model;
        model = new QStringListModel(sl);
        QLV->setModel(model);
    }
}
*
*/


/**
 * 立即开始播放音乐
 */
void MainWindow::playSong(Music music)
{
    if(playsource==1)
        _player->stop();
    else
        player->stop();
    if (isSongDownloaded(music))
    {
        playLocalSong(music);
    }
    else
    {
        playAfterDownloaded = music;
        downloadSong(music);
    }
    if (!orderSongs.contains(music))
    orderSongs.append(music);
    saveSongList("music/order", orderSongs);
    setPlayListTable(orderSongs, ui->MusicTable);
}

QString MainWindow::songPath(const Music &music) const
{
    return musicFileDir.absoluteFilePath(snum(music.id) + ".mp3");
}

void MainWindow::on_rightButton_clicked()
{
        on_lineEdit_returnPressed();
}


void MainWindow::on_lineEdit_returnPressed()
{
    ui->searchResultTable->clear();
    QString text = ui->lineEdit->text();
    searchMusic(text);
    ui->stackedWidget->setCurrentWidget(ui->searchPage);
}




void MainWindow::on_searchResultTable_itemActivated(QTableWidgetItem *item)
{
    if (searchResultSongs.size())
    {
        Music music = searchResultSongs.at(item->row());
    }
    else if (searchResultPlayLists.size())
    {
        // todo:搜索歌单
    }
}
//
//立即播放
//
//双击播放功能


void MainWindow::on_Personality_set_button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->setuserpage);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->firstpage);
}

void MainWindow::turntofirst()
{
    ui->stackedWidget->setCurrentWidget(ui->firstpage);
}

bool MainWindow::isSongDownloaded(Music music)
{
    return QFileInfo(songPath(music)).exists();
}

void MainWindow::playLocalSong(Music music)
{
    qDebug() << "开始播放" << music.simpleString();
    //mySystemTray->setToolTip(music.simpleString());
     qDebug() << "finished";
    //QString mi = music.simpleString();
    //if (mi.length() > 6)
    //{
    //    mi = mi.left(5) + "...";
    //    music_info->setText(mi);
    //    music_info->setToolTip(music.simpleString());
    //}
    //else
    //    music_info->setText(mi);
    qDebug() << "mifinished";
    if (!isSongDownloaded(music))
    {
        qDebug() << "error:未下载歌曲：" << music.simpleString() << "开始下载";
        playAfterDownloaded = music;
        downloadSong(music);
        return ;
    }

    // 设置信息
    auto max16 = [=](QString s){
        if (s.length() > 16)
            s = s.left(15) + "...";
        return s;
    };
    ui->FileName->setText(max16(music.name));
    ui->durationTimeLabel->setText(msecondToString(music.duration));

    qDebug() << "开始播放"<< music.simpleString();

    QString filename = songPath(music);
    if (filename.isEmpty())
        return;

    // 开始播放打开的文件
    _player->setFilename(filename);
    _player->play();
    playsource=1;
    if(filename.contains(".mp4", Qt::CaseSensitive))
        ui->stackedWidget->setCurrentWidget(ui->screenWidget);
    if(filename.contains(".mkv", Qt::CaseSensitive))
        ui->stackedWidget->setCurrentWidget(ui->screenWidget);
    if(filename.contains(".avi", Qt::CaseSensitive))
        ui->stackedWidget->setCurrentWidget(ui->screenWidget);
    // 开始播放
    playingSong = music;
    player->setMedia(QUrl::fromLocalFile(songPath(music)));
    player->setPosition(0);
    player->play();
    qDebug() << "playplay";
    emit signalSongPlayStarted(music);
    setWindowTitle(music.name);

    // 添加到本地歌曲
    if (localSongs.contains(music))
    {
        qDebug() << "本地歌曲中已存在：" << music.simpleString();
        return ;
    }
    else
    {
        localSongs.append(music);
        saveSongList("music/local", localSongs);
    }

    // 保存当前歌曲
    settings.setValue("music/currentSong", music.toJson());

}

void MainWindow::downloadSong(Music music)
{
    if (isSongDownloaded(music))
        return;
    downloadingSong = music;
    QString url = API_DOMAIN +"/song/url?id=" + snum(music.id);
    qDebug()<< "获取歌曲信息：" << music.simpleString();
    QNetworkAccessManager* manager = new QNetworkAccessManager;
    QNetworkRequest* request = new QNetworkRequest(url);
    request->setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=UTF-8");
    request->setHeader(QNetworkRequest::UserAgentHeader, "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/86.0.4240.111 Safari/537.36");
    connect(manager, &QNetworkAccessManager::finished, this, [=](QNetworkReply* reply)
    {
        QByteArray baData = reply->readAll();
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(baData, &error);
        if (error.error != QJsonParseError::NoError)
        {
            qDebug() << error.errorString();
            return ;
        }
        QJsonObject json = document.object();
        if (json.value("code").toInt() != 200)
        {
            qDebug() << ("返回结果不为200：") << json.value("message").toString();
            return ;
        }
        QJsonArray array = json.value("data").toArray();
        if (!array.size())
        {
            qDebug() << "未找到歌曲：" << music.simpleString();
            downloadingSong = Music();  // 清空
            downloadNext();
            return ;
        }

        json = array.first().toObject();
        QString url = JVAL_STR(url);
        int br = JVAL_INT(br); // 比率320000
        int size = JVAL_INT(size);
        QString type = JVAL_STR(type); // mp3
        QString encodeType = JVAL_STR(encodeType); // mp3
        qDebug() << "  信息：" << br << size << type << encodeType << url;
        if (size == 0)
        {
            qDebug() << "下载失败， 可能没有版权" << music.simpleString();
            if (playAfterDownloaded == music)
            {
                if (orderSongs.contains(music))
                {
                   orderSongs.removeOne(music);
                   settings.setValue("music/currentSong", "");
                   ui->FileName->clear();
                   // 设置信息
                   auto max16 = [=](QString s){
                       if (s.length() > 16)
                           s = s.left(15) + "...";
                       return s;
                   };
                   ui->FileName->setText(max16(music.name));
                   player->stop();
                }
                saveSongList("music/order", orderSongs);
                playNext();
            }
            downloadingSong = Music();
            downloadNext();
            return ;
        }

        // 下载歌曲本身
        QNetworkAccessManager manager;
        QEventLoop loop;
        QNetworkReply *reply1 = manager.get(QNetworkRequest(QUrl(url)));
        // 请求结束并完成下载后退出子事件循环
        connect(reply1, &QNetworkReply::finished, &loop, &QEventLoop::quit);

        // 开启子事件循环
        loop.exec();
        QByteArray baData1 = reply1->readAll();

        QFile file(songPath(music));
        file.open(QIODevice::WriteOnly);
        file.write(baData1);
        file.flush();
        file.close();

        emit signalSongDownLoadFinished(music);

        if (playAfterDownloaded == music)
            playLocalSong(music);

        downloadingSong = Music();
        downloadNext();
    });
    manager->get(*request);

}

void MainWindow::saveSongList(QString key, const SongList &songs)
{
    QJsonArray array;
    foreach(Music music, songs)
        array.append(music.toJson());
    settings.setValue(key,array);

}

void MainWindow::downloadNext()
{
    // 正在下载的歌已经下载了/即将下载的队列是空的 bool 0 false 1 true
    if (downloadingSong.isValid() || !toDownLoadSongs.size())
        return ;
    Music music = toDownLoadSongs.takeFirst();
    if (!music.isValid())
        return downloadNext();
    downloadSong(music);
}

void MainWindow::playNext()
{

    int index = orderSongs.indexOf(playingSong);

    qDebug()<<"歌单index："<<index;

    // 最后一首
    if (index == orderSongs.size() - 1)
    {
        /*    // 播放列表结束 随机播放我的喜欢里的歌 留着做心动模式叭
        if(!localSongs.size())
            return ;

        int r = qrand() % localSongs.size();
        startPlaySong(localSongs.at(r));
        return ;*/
        // 跳到开头播放
        playSong(orderSongs.first());
        index = orderSongs.indexOf(playingSong);
        return ;

    }

    // 歌单里不存在这首歌(放的时候被删了之类的。。
    if(index == -1)
    {
        player->stop();
        return ;
    }

    // Music music = orderSongs.first();
    Music music = orderSongs.at(index+1);
    saveSongList("music/order", orderSongs);
    setPlayListTable(orderSongs, ui->MusicTable);
    playSong(music);
    emit signalOrderSongPlayed(music);

}




void MainWindow::on_searchResultTable_itemDoubleClicked(QTableWidgetItem *item)
{
    qDebug() << "进入双击" ;
   int row = ui->searchResultTable->row(item);
   Music currentsong;
   if (row > -1 )
       currentsong = searchResultSongs.at(row);
   if (orderSongs.contains(currentsong))
   {
       orderSongs.removeOne(currentsong);
   }
   else
      orderSongs.insert(0, currentsong);
   playSong(currentsong);
}


void MainWindow::on_logButton_clicked()
{
    Person _person;
    _person.setUsername(ui->username1->text());
    _person.setPassword(ui->userpassword->text());
    users->login(_person);
    if(users->getLogState()==true){
        ui->userNameLabel->setText(_person.getUsername());
        ui->stackedWidget->setCurrentWidget(ui->firstpage);
    }
    else
        ui->lable->setText("登录失败");
    ui->username1->clear();
    ui->userpassword->clear();
}

void MainWindow::on_regButton_clicked()
{
    Person _person;
    _person.setUsername(ui->username1->text());
    _person.setPassword(ui->userpassword->text());
    users->signup(_person);
    if(users->getLogState()==true)
        ui->lable->setText("注册成功");
    else
        ui->lable->setText("注册失败");
}

//全屏显示
void MainWindow::fullscreen()
{
    on_maxiButton_pressed();
    //获取桌面屏幕大小

    //QRect mRect = QGuiApplication::primaryScreen()->geometry();
    //ui->screenWidget->setWindowFlags(Qt::Dialog);//该函数表示将窗口设为顶层窗口，因为函数showFullScreen只对顶级窗口有效，原始的顶级窗口是this
    //setWindowFlags (Qt::Dialog| Qt::FramelessWindowHint);//第一个参数表示此控件是窗口类型，第二个表示去除边框、状态栏等，不加就表示保留这些
    //ui->screenWidget->setFixedSize(mRect.width(),mRect.height());	//将screenWidget设置为可用桌面的大小
    //ui->screenWidget->showFullScreen();		//全屏显示函数
    //this->grabKeyboard();
}



//esc退出全屏
void MainWindow::keyPressEvent(QKeyEvent *event)
{

    if(event->key()==Qt::Key_Escape){
       ui->screenWidget->showMinimized();
       ui->stackedWidget->setCurrentWidget(ui->screenWidget);
       releaseKeyboard();
   }
}

void MainWindow::on_MusicTable_itemDoubleClicked(QTableWidgetItem *item)
{
    int row = ui->MusicTable->row(item);
    Music currentsong;
    if (row > -1)
        currentsong = orderSongs.at(row);
    playSong(currentsong);
}

void MainWindow::on_toPlaylistButton_clicked()
{
    setPlayListTable(orderSongs, ui->MusicTable);
    ui->stackedWidget->setCurrentWidget(ui->MusicPage);
}

/*void MainWindow::on_maxiButton_clicked(bool checked)
{
    if(checked)
    {
        ui->centralwidget->showFullScreen();
    }
    else
        ui->centralwidget->showNormal();
}*/


void MainWindow::on_maxiButton_pressed()
{
    if(isfull==true){
        qDebug()<<"nor";
        this->showNormal();
        isfull=false;
    }
    else{
        qDebug()<<"max";
        this->showMaximized();
        isfull=true;
    }
}

void MainWindow::on_logout_button_clicked()
{
    users->logState=false;
    ui->stackedWidget->setCurrentWidget(ui->firstpage);
    ui->userNameLabel->setText("未登录");
}
