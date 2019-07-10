#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "linked_list.h"
#include "picture.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bu_addpicture_clicked()
{
    picture new_imagen;
    QString tmp_name;
    tmp_name=ui->line_name->text();
    new_imagen.name=tmp_name.toStdString();
    pictures.push_back(new_imagen);
}
