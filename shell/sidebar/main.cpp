// Vitrum sidebar — Phase 1a stub.
//
// The reimagined Longhorn sidebar: a widgets + notifications hub docked
// right (clock, weather, calendar, music, notifications, tray). Layer-shell
// client, right-anchored exclusive zone. Real widgets land with the
// component implementation.

#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName(QStringLiteral("vitrum-sidebar"));

    QQmlApplicationEngine engine;
    engine.loadFromModule("Vitrum.Sidebar", "Sidebar");
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
