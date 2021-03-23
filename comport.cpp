#include "comport.h"

ComPort::ComPort(QObject *parent) : QObject(parent)
{

}

void ComPort::SendMessage(QString msg)
{
    qInfo() << "Message sent: " << msg;
}

void ComPort::MessageChanged(QString msg)
{
    qInfo() << "Message changed: " << msg;
}
