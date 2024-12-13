/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_Current_File;
    QAction *actionOpen_File;
    QAction *actionNew_File;
    QAction *action111;
    QAction *action222;
    QAction *action333;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *delButton;
    QPushButton *alterButton;
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *saveButton;
    QPushButton *openButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(1200, 16777215));
        actionSave_Current_File = new QAction(MainWindow);
        actionSave_Current_File->setObjectName("actionSave_Current_File");
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName("actionNew_File");
        action111 = new QAction(MainWindow);
        action111->setObjectName("action111");
        action222 = new QAction(MainWindow);
        action222->setObjectName("action222");
        action333 = new QAction(MainWindow);
        action333->setObjectName("action333");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(1200, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(80, 0));
        addButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(addButton);

        delButton = new QPushButton(widget);
        delButton->setObjectName("delButton");
        delButton->setMinimumSize(QSize(80, 0));
        delButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(delButton);

        alterButton = new QPushButton(widget);
        alterButton->setObjectName("alterButton");
        alterButton->setMinimumSize(QSize(80, 0));
        alterButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(alterButton);

        searchEdit = new QLineEdit(widget);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(searchEdit);

        searchButton = new QPushButton(widget);
        searchButton->setObjectName("searchButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy);
        searchButton->setMinimumSize(QSize(80, 0));
        searchButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(searchButton);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 1, -1, 0);
        tableWidget = new QTableWidget(widget_2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"	color:red;\n"
"	selection-color:green;\n"
"	selection-background-color:blue;\n"
"}\n"
"QTableWidget::item:selected\n"
"{\n"
"	color:white;\n"
"	background-color:red;\n"
"}"));

        horizontalLayout_2->addWidget(tableWidget);


        verticalLayout->addWidget(widget_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy1);
        saveButton->setMaximumSize(QSize(170, 16777215));

        horizontalLayout_3->addWidget(saveButton);

        openButton = new QPushButton(centralwidget);
        openButton->setObjectName("openButton");
        sizePolicy1.setHeightForWidth(openButton->sizePolicy().hasHeightForWidth());
        openButton->setSizePolicy(sizePolicy1);
        openButton->setMaximumSize(QSize(170, 16777215));

        horizontalLayout_3->addWidget(openButton);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave_Current_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionNew_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionSave_Current_File->setText(QCoreApplication::translate("MainWindow", "Save Current File", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Current_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_File->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action111->setText(QCoreApplication::translate("MainWindow", "111", nullptr));
        action222->setText(QCoreApplication::translate("MainWindow", "222", nullptr));
        action333->setText(QCoreApplication::translate("MainWindow", "333", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        delButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        alterButton->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\247\223\345\220\215\346\210\226\345\255\246\345\217\267\346\237\245\346\211\276...", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\345\255\230\345\202\250\346\226\207\344\273\266", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
