#ifndef VIEW_H
#define VIEW_H

#include <QQuickView>
#include "datalist.h"
#include "control.h"

class View : public QQuickView {
    Q_OBJECT
public:
    View();

private:
    DataList *dList;
    Control *control;
};

#endif // VIEW_H
