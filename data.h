#ifndef DATA_H
#define DATA_H

#include <QObject>

class Data : public QObject
{
    Q_OBJECT
public:
    explicit Data(QObject *parent = 0);

    void setDataItem(const QString data);

    Q_PROPERTY(QString dataItem READ dataItem NOTIFY dataItemChanged)
    const QString dataItem() const;

private:
    QString m_dataItem;

signals:
    void dataItemChanged();
};

#endif // DATA_H
