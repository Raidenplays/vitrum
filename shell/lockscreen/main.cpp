// Vitrum lock screen — Phase 1a stub.
//
// XP welcome-screen layout, aero'ified: user tiles as frosted-glass cards,
// theme backdrop (underwater/beach). NOTE: a real lock screen needs the
// compositor's session-lock protocol — until the Vitrum compositor lands
// in Phase 1b, this is a visual prototype only, NOT a security boundary.

#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName(QStringLiteral("vitrum-lockscreen"));

    QQmlApplicationEngine engine;
    engine.loadFromModule("Vitrum.LockScreen", "LockScreen");
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
