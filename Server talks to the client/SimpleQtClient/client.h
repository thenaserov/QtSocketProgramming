#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
private:
    QTcpSocket *socket{ nullptr };
public slots:
    void readyRead();

signals:

};

#endif // CLIENT_H
