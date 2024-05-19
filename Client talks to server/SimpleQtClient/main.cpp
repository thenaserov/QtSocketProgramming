#include <QCoreApplication>
#include "client.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Client *client = new Client();
    QString s = "yo";
    client->sendThisFuckingMessegeToTheFuckingServer(s);
    return a.exec();
}

