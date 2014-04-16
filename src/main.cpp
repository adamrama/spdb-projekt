#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char** argv)
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine qmlAppEngine;

    qmlAppEngine.load(QUrl("qrc:/qml/main.qml"));

    return app.exec();
}
