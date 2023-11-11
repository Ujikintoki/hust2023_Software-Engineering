#ifndef LOCALVID_H
#define LOCALVID_H

#include <QWidget>

namespace Ui {
class localvid;
}

class localvid : public QWidget
{
    Q_OBJECT

public:
    explicit localvid(QWidget *parent = nullptr);
    ~localvid();

private:
    Ui::localvid *ui;
};

#endif // LOCALVID_H
