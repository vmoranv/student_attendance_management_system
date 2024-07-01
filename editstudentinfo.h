#ifndef EDITSTUDENTINFO_H
#define EDITSTUDENTINFO_H

#include <QWidget>

namespace Ui {
class editstudentinfo;
}

class editstudentinfo : public QWidget
{
    Q_OBJECT

public:
    explicit editstudentinfo(QWidget *parent = nullptr);
    ~editstudentinfo();

private:
    Ui::editstudentinfo *ui;
};

#endif // EDITSTUDENTINFO_H
