#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QPixmap>
#include"linked_list.h"
#include"picture.h"
#include<fstream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    linked_list<picture>Lpictures;
    linked_list<picture>::iterator it;
    string wall_paper;
    string Stdstr;
    QString Qstr;
    QPixmap pix;
    void add_picture(linked_list<picture>&li);
    void save_list(linked_list<picture> &Val);
    void load_list(linked_list<picture> &Va2);

private slots:
    void on_push_previus_clicked();

    void on_push_next_clicked();

    void on_push_add_clicked();

    void on_push_delete_clicked();

    void on_push_save_clicked();

    void on_push_acept_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
