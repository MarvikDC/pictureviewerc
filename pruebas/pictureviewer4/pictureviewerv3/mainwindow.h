#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QPixmap>
#include"linked_list.h"
#include"picture.h"

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

private slots:
    void on_push_previus_clicked();

    void on_push_next_clicked();

    void on_push_add_clicked();

    void on_push_delete_clicked();

    void on_push_save_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
