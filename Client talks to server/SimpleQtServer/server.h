#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
private:
    QTcpServer* server{ nullptr };
    QTcpSocket* socket{ nullptr };
public slots:
    void newConnection();
    void readyRead();


signals:
};

#endif // SERVER_H
