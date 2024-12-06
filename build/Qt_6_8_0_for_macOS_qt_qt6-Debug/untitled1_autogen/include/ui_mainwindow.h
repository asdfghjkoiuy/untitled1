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
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(1200, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 12, -1, -1);
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

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        delButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        alterButton->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        searchEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\247\223\345\220\215\346\210\226\345\255\246\345\217\267\346\237\245\346\211\276...", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
