#include "application.h"

namespace APP {
Application::Application(int &argc, char *argv[])
    :QApplication(argc, argv)
{
    setApplicationName(tr("Testing Qt and OpenCV"));
}

Application::~Application()
{

}

} //namespace APP
