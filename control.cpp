#include "control.h"

Control::Control(QObject *parent) : QObject(parent) {
    m_data = new Data();
}

const QString Control::data() const {
    return m_data->dataItem();
}

void Control::setData(const QString data) {
    if (data != m_data->dataItem()) {
        m_data->setDataItem(data);
        emit dataChanged();
    }
}

void Control::apply() {
    emit append(m_data);
}

