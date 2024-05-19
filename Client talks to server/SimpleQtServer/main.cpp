#include <QCoreApplication>
#include "server.h"
#include <iostream>
#include <QString>
#include <unistd.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Server server;
    return a.exec();
}
