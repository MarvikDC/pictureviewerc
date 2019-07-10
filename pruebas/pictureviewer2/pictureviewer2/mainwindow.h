#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<iostream>
#include <QMainWindow>
#include "linked_list.h"
#include "picture.h"

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
    linked_list<picture>pictures;
    linked_list<string>::iterator it;
    char *path;
    void add_pictures(char *new_path);




private slots:
    void on_bu_addpicture_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
