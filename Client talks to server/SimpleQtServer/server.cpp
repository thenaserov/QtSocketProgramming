#include "server.h"

Server::Server(QObject *parent) : QObject(parent)
{
  server = new QTcpServer();
  server->listen(QHostAddress::Any, 43234);
  connect(server, &QTcpServer::newConnection, this, &Server::newConnection);
}

void Server::newConnection()
{
    qDebug() << "client connected";
    socket = new QTcpSocket(server->nextPendingConnection());
    connect(socket, &QTcpSocket::readyRead, this, &Server::readyRead);
    socket->write("Hey Client\n");
    socket->flush();
    socket->waitForBytesWritten(1000);
}

void Server::readyRead()
{
    qDebug() << socket->readAll();
    socket->waitForReadyRead();
}
