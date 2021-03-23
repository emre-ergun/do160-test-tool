#ifndef COMPORT_H
#define COMPORT_H

#include <QObject>
#include <QDebug>

class ComPort : public QObject
{
    Q_OBJECT
public:
    explicit ComPort(QObject *parent = nullptr);

    Q_PROPERTY(QString message MEMBER m_msg NOTIFY newMessage)

    void SendMessage(QString msg);

signals:
    void newMessage(QVariant msg);

public slots:
    void MessageChanged(QString msg);

private:
    QString m_msg;

};

#endif // COMPORT_H
