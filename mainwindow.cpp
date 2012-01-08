
#include "knowcheck.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    cTracer obTracer1( &g_obLogger, "MainWindow::MainWindow" );

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
