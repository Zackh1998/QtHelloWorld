#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    public slots:
        void doSomething();

signals:
        void SignalAlertUser();


private:
    Ui::MainWindow *ui;
    QMessageBox msgBox;

};

#endif // MAINWINDOW_H
