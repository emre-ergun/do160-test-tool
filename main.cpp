#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "comport.h"
#include "tester.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    Tester tester;
    ComPort comport;

    //TEST: Q_PROPERTY testing
    QObject::connect(&tester, &Tester::MessageChanged, &comport, &ComPort::MessageChanged);
    tester.setProperty("message", "Hello world");


    qmlRegisterType<ComPort>("com.Serial.Port", 1, 0, "ComPort");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
