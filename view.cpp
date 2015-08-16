#include "view.h"
#include <QQmlContext>

View::View() {
    dList = new DataList();
    control = new Control();

    rootContext()->setContextProperty("dList", dList);
    rootContext()->setContextProperty("control", control);

    setSource(QUrl("file:/media/D/program/4.testing/QMLTest/main.qml"));
//    setSource(QUrl("qrc:/qml/main.qml"));
    setResizeMode(QQuickView::SizeRootObjectToView);
    setSurfaceType(QSurface::OpenGLSurface);

    setWidth(300);
    setHeight(500);
    show();

    connect(control, SIGNAL(append(Data*)), dList, SLOT(append(Data*)));
}

