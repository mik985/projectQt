#include "mycontroller.h"
#include <QObject>
#include <iostream>


mycontroller::mycontroller()
{

}

void mycontroller::computeBytes(QByteArray output)
{
qDebug() << output.toHex(' ');
}
