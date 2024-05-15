#include "server.h"

Server::Server(QObject *parent) : QObject(parent)
{
    server.listen(QHostAddress::LocalHost, 43234);
    connect(&server, SIGNAL(newConnection()), this, SLOT(clientConnected()));
}

void Server::clientConnected()
{
    qDebug() << "client connected";
}
