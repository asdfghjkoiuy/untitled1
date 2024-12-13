#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./ui_addstudent.h"





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tableWidget = ui->tableWidget;
    

    
    

    
    
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

}

void MainWindow::on_addButton_clicked()
{   

    if(!add_ui) add_ui=new addStudent(this);
    add_ui -> show();
}

void MainWindow::on_actionOpen_File_triggered(){        //读取csv文件
    
    QString filePath = QFileDialog::getOpenFileName(this,"打开档案表",QDir::currentPath(),"CSV文件(*.csv)");
    QFile mFile(filePath);

    if(!mFile.open(QFile::Text | QFile::ReadOnly)){
        return;
    }

    QTextStream inFILE(&mFile);

    int cter = 0;
    QString readedLine = inFILE.readLine();                 //读行
    QStringList listValue = readedLine.split(",");          //行内用逗号分隔为列表
    tableWidget->setColumnCount(listValue.size());          //宽度，有多少列的意思
    tableWidget->setHorizontalHeaderLabels(listValue);      //列的标志是什么
    while(!inFILE.atEnd()){                                 //如果还没到文件的末尾
        QString readedLine = inFILE.readLine(); //读行
        QStringList listValue = readedLine.split(",");

        cter+=1;

        tableWidget->setRowCount(cter);      //加行

        for(int k=0;k<listValue.size();k++){
            tableWidget->setItem(cter-1,k,new QTableWidgetItem(listValue[k]));  //读入字
        }

    }

    mFile.flush();
    mFile.close();
}

void MainWindow::on_actionSave_Current_File_triggered()
{
    QString saveFileName = QFileDialog::getSaveFileName(this,tr("Save File")," ",tr("file (*.csv)"));
    if(!saveFileName.isEmpty()){
        QFile saveFile(saveFileName);
        bool ret = saveFile.open(QIODevice::Truncate | QIODevice::WriteOnly);
        if (!ret) return;
        QTextStream stream(&saveFile);
        QString saveContents;
        QHeaderView *saveHeader = tableWidget->horizontalHeader();


        if(saveHeader){
            for(int i=0;i<saveHeader->count();i++){
                QTableWidgetItem *item = tableWidget->horizontalHeaderItem(i);
                if(!item) continue;
                saveContents += item->text() + ",";
            }
            saveContents += "\n";
        }

        for(int i=0;i<tableWidget->rowCount();i++){
            for(int j=0;j<tableWidget->columnCount();j++){
                QTableWidgetItem *item = tableWidget->item(i,j);
                if(!item) continue;
                QString str = item->text();
                str.replace(","," ");            //存储的时候如果输入的有逗号，把逗号换成空格防止存储之后干扰csv逗号分隔的格式
                saveContents += str + ",";
            }
            saveContents += "\n";
        }
        stream << saveContents;
        saveFile.close();


    }
    
    

}

void MainWindow::on_saveButton_clicked()
{
    QString saveFileName = QFileDialog::getSaveFileName(this,tr("Save File")," ",tr("file (*.csv)"));
    if(!saveFileName.isEmpty()){
        QFile saveFile(saveFileName);
        bool ret = saveFile.open(QIODevice::Truncate | QIODevice::WriteOnly);
        if (!ret) return;
        QTextStream stream(&saveFile);
        QString saveContents;
        QHeaderView *saveHeader = tableWidget->horizontalHeader();


        if(saveHeader){
            for(int i=0;i<saveHeader->count();i++){
                QTableWidgetItem *item = tableWidget->horizontalHeaderItem(i);
                if(!item) continue;
                saveContents += item->text() + ",";
            }
            saveContents += "\n";
        }

        for(int i=0;i<tableWidget->rowCount();i++){
            for(int j=0;j<tableWidget->columnCount();j++){
                QTableWidgetItem *item = tableWidget->item(i,j);
                if(!item) continue;
                QString str = item->text();
                str.replace(","," ");            //存储的时候如果输入的有逗号，把逗号换成空格防止存储之后干扰csv逗号分隔的格式
                saveContents += str + ",";
            }
            saveContents += "\n";
        }
        stream << saveContents;
        saveFile.close();


    }
}

void MainWindow::on_openButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this,"打开档案表",QDir::currentPath(),"CSV文件(*.csv)");
    QFile mFile(filePath);

    if(!mFile.open(QFile::Text | QFile::ReadOnly)){
        return;
    }

    QTextStream inFILE(&mFile);

    int cter = 0;
    QString readedLine = inFILE.readLine();                 //读行
    QStringList listValue = readedLine.split(",");          //行内用逗号分隔为列表
    tableWidget->setColumnCount(listValue.size());          //宽度，有多少列的意思
    tableWidget->setHorizontalHeaderLabels(listValue);      //列的标志是什么
    while(!inFILE.atEnd()){                                 //如果还没到文件的末尾
        QString readedLine = inFILE.readLine(); //读行
        QStringList listValue = readedLine.split(",");

        cter+=1;

        tableWidget->setRowCount(cter);      //加行

        for(int k=0;k<listValue.size();k++){
            tableWidget->setItem(cter-1,k,new QTableWidgetItem(listValue[k]));  //读入字
        }

    }

    mFile.flush();
    mFile.close();
}
