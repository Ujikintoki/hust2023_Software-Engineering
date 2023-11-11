#ifndef LOCAL_H
#define LOCAL_H

#include <QWidget>

namespace Ui {
class local;
}

class local : public QWidget
{
    Q_OBJECT

public:
    explicit local(QWidget *parent = nullptr);
    ~local();

private:
    Ui::local *ui;
};

#endif // LOCAL_H
