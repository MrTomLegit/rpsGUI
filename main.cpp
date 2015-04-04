#include "rps2.h"
#include <QApplication>
#include <ctime>
#include <cstdlib>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rps2 w;
    w.show();

    return a.exec();
}
