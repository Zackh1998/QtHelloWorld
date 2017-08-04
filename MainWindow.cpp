#include "MainWindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(doSomething()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSomething()
{
    msgBox.setText("Hello Kyler");
    msgBox.show();
}
