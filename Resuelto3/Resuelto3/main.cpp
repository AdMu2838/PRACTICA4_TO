#include <QCoreApplication>
#include <QDebug>
#include <QObject>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> v {5,2,3,7,1,0,14,20};
    for_each(v.begin(),v.end(), [](int valor){
        qDebug() << valor << Qt::endl;
    });
    return a.exec();
}
