#ifndef SETUSER_H
#define SETUSER_H

#include <QWidget>
#include "person.h"

namespace Ui {
class setuser;
}

class setuser : public QWidget
{
    Q_OBJECT

public:
    explicit setuser(QWidget *parent = nullptr);
    ~setuser();

private slots:
    void on_pushButton_clicked();

private:

    Ui::setuser *ui;
};

#endif // SETUSER_H
