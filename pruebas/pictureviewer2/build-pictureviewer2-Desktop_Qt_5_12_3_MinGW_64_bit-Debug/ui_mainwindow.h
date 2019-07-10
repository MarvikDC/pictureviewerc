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
    QPushButton *bu_previus;
    QPushButton *bu_next;
    QPushButton *bu_addpicture;
    QTextEdit *text_labels;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_name;
    QLineEdit *line_path;
    QPushButton *bu_delpicture;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 367);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_picture = new QLabel(centralWidget);
        label_picture->setObjectName(QString::fromUtf8("label_picture"));
        label_picture->setGeometry(QRect(40, 20, 351, 221));
        label_picture->setScaledContents(true);
        bu_previus = new QPushButton(centralWidget);
        bu_previus->setObjectName(QString::fromUtf8("bu_previus"));
        bu_previus->setGeometry(QRect(30, 270, 75, 23));
        bu_next = new QPushButton(centralWidget);
        bu_next->setObjectName(QString::fromUtf8("bu_next"));
        bu_next->setGeometry(QRect(130, 270, 75, 23));
        bu_addpicture = new QPushButton(centralWidget);
        bu_addpicture->setObjectName(QString::fromUtf8("bu_addpicture"));
        bu_addpicture->setGeometry(QRect(230, 270, 75, 23));
        text_labels = new QTextEdit(centralWidget);
        text_labels->setObjectName(QString::fromUtf8("text_labels"));
        text_labels->setGeometry(QRect(470, 130, 151, 161));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 110, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(470, 10, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 50, 47, 13));
        line_name = new QLineEdit(centralWidget);
        line_name->setObjectName(QString::fromUtf8("line_name"));
        line_name->setGeometry(QRect(470, 30, 113, 20));
        line_path = new QLineEdit(centralWidget);
        line_path->setObjectName(QString::fromUtf8("line_path"));
        line_path->setGeometry(QRect(470, 70, 113, 20));
        bu_delpicture = new QPushButton(centralWidget);
        bu_delpicture->setObjectName(QString::fromUtf8("bu_delpicture"));
        bu_delpicture->setGeometry(QRect(320, 270, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 21));
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
        bu_previus->setText(QApplication::translate("MainWindow", "previus", nullptr));
        bu_next->setText(QApplication::translate("MainWindow", "next", nullptr));
        bu_addpicture->setText(QApplication::translate("MainWindow", "AddPicture", nullptr));
        label->setText(QApplication::translate("MainWindow", "Labels", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "path:", nullptr));
        bu_delpicture->setText(QApplication::translate("MainWindow", "DelPicture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
