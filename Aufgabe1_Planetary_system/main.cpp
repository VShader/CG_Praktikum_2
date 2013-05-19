#include <QApplication>
#include <iostream>

#include "mainWindow/mainWindow.h"
#include "cube.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    if (!QGLFormat::hasOpenGL()) {
        std::cerr << "This system has no OpenGL support" << std::endl;
        return 1;
    }

    MainWindow mainWindow;
    mainWindow.resize(500, 300);
    mainWindow.show();

    return app.exec();
}
