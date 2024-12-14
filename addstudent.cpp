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
    ui->genInput->setFocus();
}
void addStudent::on_nameInput_editingFinished(){
    ui->numInput->setFocus();
}
void addStudent::on_numInput_editingFinished(){
    ui->classInput->setFocus();
}
void addStudent::on_mathInput_editingFinished(){
    ui->engInput->setFocus();
}
void addStudent::on_cnInput_editingFinished(){
    ui->mathInput->setFocus();
}
void addStudent::on_engInput_editingFinished(){
    addStudent::on_confirmButton_clicked();
}
void addStudent::on_genInput_editingFinished(){
    ui->cnInput->setFocus();
}
void addStudent::on_confirmButton_clicked(){        //确认添加
    QStringList data;
    data.append(ui->nameInput->text());
    data.append(ui->numInput->text());
    data.append(ui->classInput->text());
    data.append(ui->genInput->text());
    data.append(ui->cnInput->text());
    data.append(ui->mathInput->text());
    data.append(ui->engInput->text());      //读取

    //清空
    ui->nameInput->clear();
    ui->numInput->clear();
    ui->classInput->clear();
    ui->genInput->clear();
    ui->cnInput->clear();
    ui->mathInput->clear();
    ui->engInput->clear();

    //光标切换
    ui->nameInput->setFocus();

    emit sendDataSignal(data);


}
void addStudent::on_cancelButton_clicked(){         //关闭窗口
    emit sendCloseSignal(1);
    
}
