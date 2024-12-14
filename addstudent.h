#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

#include <QMainWindow>
#include <QDialog>

#include <QTableWidget>
#include <QTableWidgetItem>


using namespace Qt;
class MainWindow;

namespace Ui {
class addStudent;
}

class addStudent : public QMainWindow
{
    Q_OBJECT

public:
    explicit addStudent(QWidget *parent = nullptr);
    ~addStudent();


private slots:
    void on_classInput_editingFinished();
    void on_nameInput_editingFinished();
    void on_numInput_editingFinished();
    void on_mathInput_editingFinished();
    void on_cnInput_editingFinished();
    void on_engInput_editingFinished();
    void on_genInput_editingFinished();
    void on_confirmButton_clicked();
    void on_cancelButton_clicked();

signals:
    void sendDataSignal(QStringList data);      //往mainwindow的表格里面传入数组
    void sendCloseSignal(int reason);

private:

    
    Ui::addStudent *ui;
};

#endif // ADDSTUDENT_H
