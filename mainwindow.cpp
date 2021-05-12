#include "mainwindow.h"
#include <opencv2/videoio.hpp>
#include <QCamera>
#include <QCameraInfo>
#include <QCameraViewfinder>
#include <QDebug>

namespace APP {
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Qt and OpenCV"));
    QList<QCameraInfo> listCamera = QCameraInfo::availableCameras();
    for (int i = 0;i < listCamera.count() ; i++ )
    {
        qDebug() << listCamera[i].deviceName();
        qDebug() << listCamera[i].description();
        qDebug() << listCamera[i].defaultCamera();
    }

    QCameraViewfinder *viewfinder = new QCameraViewfinder(this);
    setCentralWidget(viewfinder);
    viewfinder->show();
    QCamera *cam = new QCamera(listCamera[0], this); //test
    cam->setViewfinder(viewfinder);
    cam->start();



}

MainWindow::~MainWindow()
{
}

} //namespace APP

