#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include "addstudent.h"

#include <QFileDialog>
#include <QMainWindow>
#include <QDialog>

#include <QTableWidget>
#include <QTableWidgetItem>

#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include <QString>




QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
//关联控件信号 on_<objectName>_<signals>
void on_addButton_clicked();
void on_delButton_clicked();
void on_alterButton_clicked();
void on_searchButton_clicked();
void on_searchEdit_editingFinished();
void on_actionNew_File_triggered();         //新的文件
void on_actionOpen_File_triggered();        //打开文件
void on_actionSave_Current_File_triggered();    //保存当前文件
void on_saveButton_clicked();
void on_openButton_clicked();
void on_mathSortButton_clicked();
void on_cnSortButton_clicked();
void on_EngSortButton_clicked();
void on_newButton_clicked();
void on_numSortButton_clicked();

void receiveDataSlot(QStringList data);
void receiveCloseSignal(int reason);



private:
    Ui::MainWindow *ui;

    addStudent *add_ui=nullptr;
    QTableWidget *tableWidget;


};
#endif // MAINWINDOW_H
