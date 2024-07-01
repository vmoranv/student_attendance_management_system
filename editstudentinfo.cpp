#include "editstudentinfo.h"
#include "ui_editstudentinfo.h"

editstudentinfo::editstudentinfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editstudentinfo)
{
    ui->setupUi(this);
}

editstudentinfo::~editstudentinfo()
{
    delete ui;
}
