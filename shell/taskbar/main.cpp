// Vitrum taskbar — Phase 1a stub.
//
// The taskbar is a layer-shell client: it asks the compositor for a
// bottom-anchored, exclusive-zone surface via LayerShellQt, then renders
// its UI in QML. The layer-shell wiring lands with the real component;
// this stub just proves the QML module loads.

#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    app.setApplicationName(QStringLiteral("vitrum-taskbar"));

    QQmlApplicationEngine engine;
    engine.loadFromModule("Vitrum.Taskbar", "Taskbar");
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
