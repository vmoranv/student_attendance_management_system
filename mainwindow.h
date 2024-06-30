#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QMessageBox>

#include "optiondatabase.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public optionDatabase
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void CreateDatabase();
    void CreateTable();
    bool selectstuInfos(QList<studentInfo> &stuInfos);
    bool addstuInfos(studentInfo stuInfos);
    bool delstuInfos(int Id);
    bool editstuInfos(studentInfo stuInfos);
    bool searchstuInfos(studentInfo stuInfos);


private slots:
    void on_pushButton_query_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase sqldb;
    QSqlQueryModel sqlmodel;

};
#endif // MAINWINDOW_H
