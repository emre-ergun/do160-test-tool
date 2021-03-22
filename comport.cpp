#include "comport.h"

ComPort::ComPort(QObject *parent) : QObject(parent)
{

}

void ComPort::SendMessage(QString &msg)
{
    qInfo() << "Message sent: " << msg;
}
