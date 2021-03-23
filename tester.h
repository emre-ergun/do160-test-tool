#ifndef TESTER_H
#define TESTER_H

#include <QObject>

class Tester : public QObject
{
    Q_OBJECT

    QString m_message;
public:
    explicit Tester(QObject *parent = nullptr);

    Q_PROPERTY(QString message MEMBER m_message NOTIFY MessageChanged)

    //QString message();
    //void setMessage(QString msg);

signals:
    void MessageChanged(QString msg);

};

#endif // TESTER_H
