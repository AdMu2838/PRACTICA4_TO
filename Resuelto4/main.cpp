#include <QCoreApplication>
#include <QDebug>
#include <QObject>
#include <QString>
using namespace std;

/*
 * PARTE B
 * RESUELTO 4
 * /*
/*class adulto : public QObject
{
private:
    QString nombre;
public:
    adulto (QObject *base = 0): QObject(base) {
    }
    void setNombre (const QString &nomb) {
        nombre = nomb;
    }

    QString getNombre() const {
        return nombre;
    }

    ~adulto() {
        qDebug() << "..objeto destruido...";
    }
};*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
     * PARTE A RESUELTO4
     * QCoreApplication a(argc, argv);
    int x=47;
    double y=3.2478;
    string t="OK";
    QString qtcadena = QString("%1 %2 %3").arg(QString::fromStdString(t)).arg(y).arg(x);
    string cadena = qtcadena.toStdString(); //convertir dato primitivo string a QString qDebug() << cadena.c_str(); //convertir para mostrar en el debug qDebug() << qtcadena;
    qtcadena = "arequipa ciudad blanca 2021"; qDebug() << qtcadena.contains("ciudad"); qDebug() << qtcadena.indexOf("2021");
    //devuelve bool //devuelve la posición.
    return a.exec();*/
    /*
     * PARTE B RESUELTO 4
     * adulto *papa = new adulto;
    adulto *hijo1 = new adulto (papa);
    adulto *hijo2 = new adulto (papa);
    hijo1->setNombre ("manuel");
    hijo2->setNombre ("Jose");
    delete papa;*/
    return a.exec();
}
