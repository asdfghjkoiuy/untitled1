#include "addstudent.h"
#include "ui_addstudent.h"

#include "mainwindow.h"



addStudent::addStudent(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::addStudent)
{
    ui->setupUi(this);
}

addStudent::~addStudent()
{
    delete ui;
}
void addStudent::on_classInput_editingFinished(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_nameInput_editingFinished(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_numInput_editingFinished(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_mathInput_editingFinished(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_cnInput_editingFinished(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_engInput_editingFinished(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_genderInput_editingFinished(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_confirmButton_clicked(){
    qDebug() << __FUNCTION__;
}
void addStudent::on_cancelButton_clicked(){
    closed=0;
    close();
    
}
