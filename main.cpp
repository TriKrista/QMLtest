#include <QGuiApplication>
#include "view.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    View w;

    return app.exec();
}
