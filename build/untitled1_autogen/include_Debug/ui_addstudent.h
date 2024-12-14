/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addStudent
{
public:
    QAction *actionPreferences;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *classInput;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *nameInput;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *genInput;
    QSpacerItem *verticalSpacer;
    QLineEdit *cnInput;
    QLabel *label_6;
    QLineEdit *engInput;
    QLabel *label;
    QLineEdit *mathInput;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QLineEdit *numInput;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QPushButton *confirmButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addStudent)
    {
        if (addStudent->objectName().isEmpty())
            addStudent->setObjectName("addStudent");
        addStudent->resize(548, 463);
        actionPreferences = new QAction(addStudent);
        actionPreferences->setObjectName("actionPreferences");
        centralwidget = new QWidget(addStudent);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        classInput = new QLineEdit(widget);
        classInput->setObjectName("classInput");
        classInput->setMinimumSize(QSize(180, 0));
        classInput->setMaximumSize(QSize(260, 30));

        gridLayout->addWidget(classInput, 5, 0, 1, 2);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 11, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 9, 2, 1, 1);

        nameInput = new QLineEdit(widget);
        nameInput->setObjectName("nameInput");
        nameInput->setMinimumSize(QSize(180, 0));
        nameInput->setMaximumSize(QSize(260, 30));

        gridLayout->addWidget(nameInput, 0, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 10, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 5, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 2, 2, 2, 1);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 1, 1, 1);

        genInput = new QLineEdit(widget);
        genInput->setObjectName("genInput");
        genInput->setMinimumSize(QSize(180, 0));
        genInput->setMaximumSize(QSize(260, 30));

        gridLayout->addWidget(genInput, 7, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 12, 1, 1, 1);

        cnInput = new QLineEdit(widget);
        cnInput->setObjectName("cnInput");
        cnInput->setMinimumSize(QSize(180, 0));
        cnInput->setMaximumSize(QSize(260, 30));

        gridLayout->addWidget(cnInput, 9, 0, 1, 2);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 13, 2, 1, 1);

        engInput = new QLineEdit(widget);
        engInput->setObjectName("engInput");
        engInput->setMinimumSize(QSize(180, 0));
        engInput->setMaximumSize(QSize(260, 30));

        gridLayout->addWidget(engInput, 13, 0, 1, 2);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 2, 1, 1);

        mathInput = new QLineEdit(widget);
        mathInput->setObjectName("mathInput");
        mathInput->setMinimumSize(QSize(180, 0));
        mathInput->setMaximumSize(QSize(260, 30));

        gridLayout->addWidget(mathInput, 11, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 4, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 7, 2, 1, 1);

        numInput = new QLineEdit(widget);
        numInput->setObjectName("numInput");
        numInput->setMinimumSize(QSize(180, 0));
        numInput->setMaximumSize(QSize(260, 30));

        gridLayout->addWidget(numInput, 2, 0, 2, 2);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 1, 1, 1, 1);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(220, 220));
        widget_4->setCursor(QCursor(Qt::CursorShape::WhatsThisCursor));
        widget_4->setStyleSheet(QString::fromUtf8("border-image: url(./assets/hebut.png);\n"
""));

        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cancelButton = new QPushButton(widget_3);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);

        confirmButton = new QPushButton(widget_3);
        confirmButton->setObjectName("confirmButton");

        horizontalLayout_2->addWidget(confirmButton);


        verticalLayout->addWidget(widget_3);


        horizontalLayout->addWidget(widget_2);

        addStudent->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addStudent);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 548, 37));
        addStudent->setMenuBar(menubar);
        statusbar = new QStatusBar(addStudent);
        statusbar->setObjectName("statusbar");
        addStudent->setStatusBar(statusbar);
        QWidget::setTabOrder(nameInput, numInput);
        QWidget::setTabOrder(numInput, classInput);
        QWidget::setTabOrder(classInput, genInput);
        QWidget::setTabOrder(genInput, cnInput);
        QWidget::setTabOrder(cnInput, mathInput);
        QWidget::setTabOrder(mathInput, engInput);
        QWidget::setTabOrder(engInput, cancelButton);
        QWidget::setTabOrder(cancelButton, confirmButton);

        retranslateUi(addStudent);

        QMetaObject::connectSlotsByName(addStudent);
    } // setupUi

    void retranslateUi(QMainWindow *addStudent)
    {
        addStudent->setWindowTitle(QCoreApplication::translate("addStudent", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        actionPreferences->setText(QCoreApplication::translate("addStudent", "Preferences", nullptr));
        label_5->setText(QCoreApplication::translate("addStudent", "\346\225\260\345\255\246", nullptr));
        label_4->setText(QCoreApplication::translate("addStudent", "\350\257\255\346\226\207", nullptr));
        label_2->setText(QCoreApplication::translate("addStudent", "\347\217\255\347\272\247", nullptr));
        label_7->setText(QCoreApplication::translate("addStudent", "\345\255\246\345\217\267", nullptr));
        label_6->setText(QCoreApplication::translate("addStudent", "\350\213\261\350\257\255", nullptr));
        label->setText(QCoreApplication::translate("addStudent", "\345\247\223\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("addStudent", "\346\200\247\345\210\253", nullptr));
        cancelButton->setText(QCoreApplication::translate("addStudent", "\345\217\226\346\266\210", nullptr));
        confirmButton->setText(QCoreApplication::translate("addStudent", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addStudent: public Ui_addStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
