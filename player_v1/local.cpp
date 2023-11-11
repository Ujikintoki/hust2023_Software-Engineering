
#include "local.h"
#include "ui_local.h"

local::local(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::local)
{
    ui->setupUi(this);
}

local::~local()
{
    delete ui;
}
