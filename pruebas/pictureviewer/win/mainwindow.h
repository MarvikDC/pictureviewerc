#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<iostream>
#include <QMainWindow>
#include "linked_list.h"

using namespace  std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPixmap pix;
    linked_list<string>picture;
    linked_list<string>::iterator it;




private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
