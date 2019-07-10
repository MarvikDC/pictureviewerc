/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_picture;
    QPushButton *push_previus;
    QPushButton *push_next;
    QPushButton *push_save;
    QPushButton *push_delete;
    QPushButton *push_add;
    QLineEdit *line_name;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *line_path;
    QTextEdit *text_description;
    QLabel *label_3;
    QPushButton *push_acept;
    QPushButton *push_edit;
    QPushButton *push_change;
    QLabel *label_back;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(728, 367);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_picture = new QLabel(centralWidget);
        label_picture->setObjectName(QString::fromUtf8("label_picture"));
        label_picture->setGeometry(QRect(30, 20, 451, 191));
        label_picture->setScaledContents(true);
        push_previus = new QPushButton(centralWidget);
        push_previus->setObjectName(QString::fromUtf8("push_previus"));
        push_previus->setGeometry(QRect(30, 250, 75, 23));
        push_next = new QPushButton(centralWidget);
        push_next->setObjectName(QString::fromUtf8("push_next"));
        push_next->setGeometry(QRect(120, 250, 75, 23));
        push_save = new QPushButton(centralWidget);
        push_save->setObjectName(QString::fromUtf8("push_save"));
        push_save->setGeometry(QRect(390, 250, 75, 23));
        push_delete = new QPushButton(centralWidget);
        push_delete->setObjectName(QString::fromUtf8("push_delete"));
        push_delete->setGeometry(QRect(300, 250, 75, 23));
        push_add = new QPushButton(centralWidget);
        push_add->setObjectName(QString::fromUtf8("push_add"));
        push_add->setGeometry(QRect(210, 250, 75, 23));
        line_name = new QLineEdit(centralWidget);
        line_name->setObjectName(QString::fromUtf8("line_name"));
        line_name->setEnabled(false);
        line_name->setGeometry(QRect(530, 40, 161, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(530, 20, 51, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 290, 47, 16));
        line_path = new QLineEdit(centralWidget);
        line_path->setObjectName(QString::fromUtf8("line_path"));
        line_path->setEnabled(false);
        line_path->setGeometry(QRect(60, 290, 661, 21));
        text_description = new QTextEdit(centralWidget);
        text_description->setObjectName(QString::fromUtf8("text_description"));
        text_description->setEnabled(false);
        text_description->setGeometry(QRect(530, 90, 161, 121));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 70, 71, 16));
        push_acept = new QPushButton(centralWidget);
        push_acept->setObjectName(QString::fromUtf8("push_acept"));
        push_acept->setGeometry(QRect(590, 250, 75, 23));
        push_edit = new QPushButton(centralWidget);
        push_edit->setObjectName(QString::fromUtf8("push_edit"));
        push_edit->setGeometry(QRect(470, 250, 75, 23));
        push_change = new QPushButton(centralWidget);
        push_change->setObjectName(QString::fromUtf8("push_change"));
        push_change->setGeometry(QRect(550, 220, 111, 23));
        label_back = new QLabel(centralWidget);
        label_back->setObjectName(QString::fromUtf8("label_back"));
        label_back->setGeometry(QRect(10, 10, 711, 301));
        label_back->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        label_back->raise();
        label_picture->raise();
        push_previus->raise();
        push_next->raise();
        push_save->raise();
        push_delete->raise();
        push_add->raise();
        line_name->raise();
        label->raise();
        label_2->raise();
        line_path->raise();
        text_description->raise();
        label_3->raise();
        push_acept->raise();
        push_edit->raise();
        push_change->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 728, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_picture->setText(QString());
        push_previus->setText(QApplication::translate("MainWindow", "previus", nullptr));
        push_next->setText(QApplication::translate("MainWindow", "next", nullptr));
        push_save->setText(QApplication::translate("MainWindow", "save", nullptr));
        push_delete->setText(QApplication::translate("MainWindow", "delete", nullptr));
        push_add->setText(QApplication::translate("MainWindow", "Add", nullptr));
        label->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Path", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Descriptions", nullptr));
        push_acept->setText(QApplication::translate("MainWindow", "Acept", nullptr));
        push_edit->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        push_change->setText(QApplication::translate("MainWindow", "change", nullptr));
        label_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
