#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <ElaWindow.h>
#include <ElaWindow.h>
#include <ElaApplication.h>

class MainWindow : public ElaWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    
};
#endif // MAINWINDOW_H
