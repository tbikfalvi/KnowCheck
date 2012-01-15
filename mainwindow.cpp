
#include "knowcheck.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "clessonfile.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    cTracer obTracer1( &g_obLogger, "MainWindow::MainWindow" );

    ui->setupUi(this);

    cLessonFile     lfFile;

    lfFile.setLessonFileName( "Lecke1.txt" );
}

MainWindow::~MainWindow()
{
    delete ui;
}
