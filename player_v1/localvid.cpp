#include "localvid.h"
#include "ui_localvid.h"

localvid::localvid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::localvid)
{
    ui->setupUi(this);
}

localvid::~localvid()
{
    delete ui;
}
