#ifndef MYCONTROLLER_H
#define MYCONTROLLER_H
#include <QObject>
#include <QDebug>

class mycontroller: public QObject
{
    Q_OBJECT
public:
    mycontroller();
public slots:
    void computeBytes(QByteArray output);
};

#endif // MYCONTROLLER_H
