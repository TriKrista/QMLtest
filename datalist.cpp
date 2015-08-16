#include "datalist.h"

DataList::DataList(QObject *parent) : QObject(parent) {

}

const QList<Data *> DataList::dataList() const {
    return m_dataList;
}

const QList<QObject *> DataList::dataAsObject() const {
    QList<QObject *> res;
    res.reserve(m_dataList.count());
    for (auto i : m_dataList) {
        res.append(i);
    }

    return res;
}

void DataList::append(Data *d) {
    if (!m_dataList.contains(d)) {
        m_dataList << d;

    }
    emit dataListChanged();
}

