#include "mainwindow.h"
#include "application.h"

int main(int argc, char *argv[])
{
    APP::Application a(argc, argv);
    APP::MainWindow w;
    w.show();
    return a.exec();
}
