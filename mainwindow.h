#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace APP {


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

} //namespace APP
#endif // MAINWINDOW_H
