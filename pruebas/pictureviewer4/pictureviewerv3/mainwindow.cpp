#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QPixmap>
#include"linked_list.h"
#include"picture.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //load data
    //"simulation:
    string nombre="name1";
    string path="C:/Users/alogistica2/Dropbox (Personal)/ULS/S3/LP2/CLASES/0-final/qt/pictureviewer3/pictureviewerv3/images/1";
    string nombre2="name1";
    string path2="C:/Users/alogistica2/Dropbox (Personal)/ULS/S3/LP2/CLASES/0-final/qt/pictureviewer3/pictureviewerv3/images/1";
    picture a(nombre,path);
    picture a1(nombre,path);

    wall_paper=path;
    Qstr=QString::fromStdString(wall_paper);
    pix=QPixmap(Qstr);

    ui->label_picture->setPixmap(pix);
    Lpictures.push_front(a);
    Lpictures.push_back(a1);
    it=Lpictures.begin();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_push_previus_clicked()
{
    if(it != Lpictures.begin())
    {
        --it;
    }
    else
    {
        it=Lpictures.end();
    }

    Qstr=QString::fromStdString((*it).path);
    pix=QPixmap(Qstr);
    ui->label_picture->setPixmap(pix);
}

void MainWindow::on_push_next_clicked()
{
    if(it != Lpictures.end())
    {
        ++it;
    }
    else
    {
        it=Lpictures.begin();
    }

    Qstr=QString::fromStdString((*it).path);
    pix=QPixmap(Qstr);
    ui->label_picture->setPixmap(pix);
}

void MainWindow::on_push_add_clicked()
{

}

void MainWindow::on_push_delete_clicked()
{

}

void MainWindow::on_push_save_clicked()
{

}
