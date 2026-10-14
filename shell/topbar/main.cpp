// Vitrum top bar — Phase 1a stub.
//
// Unity-style universal (global) menu bar, top-anchored layer-shell
// surface. Menu export via D-Bus (appmenu) lands with the component.

#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName(QStringLiteral("vitrum-topbar"));

    QQmlApplicationEngine engine;
    engine.loadFromModule("Vitrum.TopBar", "TopBar");
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
