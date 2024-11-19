#include <QDebug>
#include <QString>

int main()
{
    QString str("8564.26495574");
    double a = 8564.26495574;
    double b = str.toDouble();
    qDebug() << QString("%1").arg(a, 0, 'f', 5);
    qDebug() << QString("%1").arg(a, 0, 'g', 5);
    qDebug() << QString("%1").arg(a, 0, 'e', 10);
    qDebug() << QString("%1").arg(a, 0, 'g', 30);
    qDebug() << QString("%1").arg(b, 0, 'f', 5);
    qDebug() << QString("%1").arg(b, 0, 'g', 5);
    qDebug() << QString("%1").arg(b, 0, 'e', 10);
    qDebug() << QString("%1").arg(b, 0, 'g', 30);


}
