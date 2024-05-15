#include "server.h"

Server::Server(QObject *parent) : QObject(parent)
{
  server = new QTcpServer();
  server->listen(QHostAddress::Any, 43234);
  connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));
}

void Server::newConnection()
{
    qDebug() << "client connected";
    QTcpSocket *socket = server->nextPendingConnection();
    socket->write("Hey Client\n");
    socket->flush();
    socket->waitForBytesWritten(1000);
}
