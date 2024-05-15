#include <QCoreApplication>
#include <QTcpSocket>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTcpSocket socket;
    socket.connectToHost("127.0.0.1", 43234);

    return a.exec();
}
