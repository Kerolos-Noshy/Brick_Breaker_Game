#include "mainmenu.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMenu w;
    //w.show();
    w.showFullScreen();
    return a.exec();
}
