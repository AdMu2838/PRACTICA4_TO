#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QListWidget>
#include <QLabel>
#include <QMap>

class CountryInfoWidget : public QWidget {
    Q_OBJECT

public:
    CountryInfoWidget(QWidget *parent = nullptr) : QWidget(parent) {
        QVBoxLayout *layout = new QVBoxLayout(this);

        listWidget = new QListWidget(this);
        label = new QLabel(this);

        layout->addWidget(listWidget);
        layout->addWidget(label);

        // Define countries, languages, and capitals
        countryData["Perú"] = qMakePair(QString("Español"), QString("Lima"));
        countryData["Japón"] = qMakePair(QString("Japonés"), QString("Tokio"));
        countryData["Francia"] = qMakePair(QString("Francés"), QString("París"));

        // Populate the list widget
        for (const QString &country : countryData.keys()) {
            listWidget->addItem(country);
        }

        connect(listWidget, &QListWidget::itemClicked, this, &CountryInfoWidget::onCountrySelected);
    }

private slots:
    void onCountrySelected(QListWidgetItem *item) {
        QString country = item->text();
        QString language = countryData[country].first;
        QString capital = countryData[country].second;

        label->setText(QString("Idioma: %1\nCapital: %2").arg(language).arg(capital));
    }

private:
    QListWidget *listWidget;
    QLabel *label;
    QMap<QString, QPair<QString, QString>> countryData;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    CountryInfoWidget window;
    window.setWindowTitle("Información de Países");
    window.resize(300, 200);
    window.show();

    return app.exec();
}

#include "main.moc"
