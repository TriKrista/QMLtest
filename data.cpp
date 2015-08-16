#include "data.h"

Data::Data(QObject *parent) : QObject(parent) {

}

void Data::setDataItem(const QString data) {
    if (data != m_dataItem) {
        m_dataItem = data;
        emit dataItem();
    }
}

const QString Data::dataItem() const {
    return m_dataItem;
}

