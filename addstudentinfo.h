#ifndef ADDSTUDENTINFO_H
#define ADDSTUDENTINFO_H

#include <QDialog>

namespace Ui {
class addStudentInfo;
}

class addStudentInfo : public QDialog
{
    Q_OBJECT

public:
    explicit addStudentInfo(QWidget *parent = nullptr);
    ~addStudentInfo();

private:
    Ui::addStudentInfo *ui;
};

#endif // ADDSTUDENTINFO_H
