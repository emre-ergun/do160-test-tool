#ifndef COMPORT_H
#define COMPORT_H

#include <QObject>
#include <QDebug>

class ComPort : public QObject
{
    Q_OBJECT
public:
    explicit ComPort(QObject *parent = nullptr);

    void SendMessage(QString msg);

signals:

public slots:
    void MessageChanged(QString msg);

};

#endif // COMPORT_H
