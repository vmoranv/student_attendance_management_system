#include "ui_addstudentinfo.h"

addStudentInfo::addStudentInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addStudentInfo)
{
    ui->setupUi(this);
}

addStudentInfo::~addStudentInfo()
{
    delete ui;
}
