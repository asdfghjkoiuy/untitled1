#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./ui_addstudent.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tableWidget = ui->tableWidget;
    // 设置列数
    tableWidget->setColumnCount(9);
    // 设置行数
    tableWidget->setRowCount(10);
    // 设置列宽
    tableWidget->setColumnWidth(0, 100);
    tableWidget->setColumnWidth(1, 100);
    QStringList horizontalHeaders;
    horizontalHeaders << "姓名" << "性别" << "年龄" << "学号" << "专业" << "数学成绩" << "语文成绩" << "英语成绩" << "总成绩";
    tableWidget->setHorizontalHeaderLabels(horizontalHeaders);
    
    
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_delButton_clicked()
{
    qDebug() << __FUNCTION__;
}
void MainWindow::on_alterButton_clicked()
{
    qDebug() << __FUNCTION__;
}
void MainWindow::on_searchButton_clicked()
{
    qDebug() << __FUNCTION__;
}
void MainWindow::on_searchEdit_editingFinished()
{
    qDebug() << __FUNCTION__;
}
void MainWindow::on_actionNew_File_triggered()          
{
    qDebug() << __FUNCTION__;
}
void MainWindow::on_actionOpen_File_triggered()
{

}
void MainWindow::on_actionSave_Current_File_triggered()
{
    

}
void MainWindow::on_addButton_clicked()
{   

    if(!add_ui) add_ui=new addStudent(this);
    add_ui -> show();
}

