#ifndef CONTROL_H
#define CONTROL_H

#include <QObject>
#include "data.h"

class Control : public QObject {
    Q_OBJECT

public:
    Control(QObject *parent = 0);

    Q_PROPERTY(QString data READ data WRITE setData NOTIFY dataChanged)
    const QString data() const;
    void setData(const QString data);

    Q_INVOKABLE void apply();

private:
    Data *m_data;

signals:
    void append(Data *d);
    void dataChanged();
};

#endif // CONTROL_H
