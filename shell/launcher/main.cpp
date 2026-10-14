// Vitrum launcher — Phase 1a stub.
//
// Classic start menu with type-to-search (Windows 7–11 behavior), rendered
// as a layer-shell overlay panel. Search backend lands with the component.

#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName(QStringLiteral("vitrum-launcher"));

    QQmlApplicationEngine engine;
    engine.loadFromModule("Vitrum.Launcher", "Launcher");
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
