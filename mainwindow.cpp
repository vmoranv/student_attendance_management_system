#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CreateDatabase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CreateDatabase()
{
    sqldb=QSqlDatabase::addDatabase("QSQLITE");
    sqldb.setDatabaseName("./student.db");
    if (!sqldb.open())
    {
        qDebug()<<"Failed to Open database";
        return;
    }
    QSqlQuery query;
    QString defaultsqlcreate=QString("CREATE TABLE if not exists students (id INT PRIMARY KEY,name VARCHAR(255),sex INT,age INT,classname VARCHAR(255),coursedate DATE,coursenum INT,coursename VARCHAR(255),coursetype VARCHAR(255),credit DECIMAL(5, 2),courselauchtime DATETIME);");
    if (!query.exec(defaultsqlcreate))
    {
        qDebug()<<"Failed to create table";
        qDebug()<<query.lastQuery();
        QMessageBox::warning(0,"失败","创建表失败");
        return;
    }
    sqldb.close();
}

bool MainWindow::selectstuInfos(QList<studentInfo> &stuInfos)
{
    if(sqldb.open())
    {
        return true;
    }
    return true;
}

bool MainWindow::addstuInfos(studentInfo stuInfos)
{

}

bool MainWindow::delstuInfos(int Id)
{

}

bool MainWindow::editstuInfos(studentInfo stuInfos)
{

}

bool MainWindow::searchstuInfos(studentInfo stuInfos)
{

}
