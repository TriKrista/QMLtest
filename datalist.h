#ifndef DATALIST_H
#define DATALIST_H

#include <QObject>
#include "data.h"

class DataList : public QObject
{
    Q_OBJECT
public:
    explicit DataList(QObject *parent = 0);

    Q_PROPERTY(QList<QObject *> dataList READ dataAsObject NOTIFY dataListChanged)
    const QList<Data *> dataList() const;
    const QList<QObject *> dataAsObject() const;

private:
    QList<Data *> m_dataList;

public slots:
    void append(Data *d);

signals:
    void dataListChanged();
};

#endif // DATALIST_H
