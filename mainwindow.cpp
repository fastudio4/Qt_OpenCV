#include "mainwindow.h"
#include <opencv2/videoio.hpp>
namespace APP {
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Qt and OpenCV"));
}

MainWindow::~MainWindow()
{
}

} //namespace APP

