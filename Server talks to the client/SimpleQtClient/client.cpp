#include "client.h"

Client::Client(QObject *parent) : QObject(parent)
{
    socket = new QTcpSocket();
    socket->connectToHost("127.0.0.1", 43234);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void Client::readyRead()
{
    qDebug() << socket->readAll();
}
