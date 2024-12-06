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
    bool closed=1;

private slots:
    void on_classInput_editingFinished();
    void on_nameInput_editingFinished();
    void on_numInput_editingFinished();
    void on_mathInput_editingFinished();
    void on_cnInput_editingFinished();
    void on_engInput_editingFinished();
    void on_genderInput_editingFinished();
    void on_confirmButton_clicked();
    void on_cancelButton_clicked();


private:
    
    
    Ui::addStudent *ui;
};

#endif // ADDSTUDENT_H
