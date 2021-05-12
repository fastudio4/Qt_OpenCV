#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>
namespace APP {


class Application : public QApplication
{
    Q_OBJECT
public:
    Application(int &argc, char *argv[]);
    virtual ~Application();
};

} //namespace APP

#endif // APPLICATION_H
