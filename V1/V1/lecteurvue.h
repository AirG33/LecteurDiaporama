#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QWidget>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

public slots:
    void lancerDiapo();
    void arreterDiapo();
    void precedent();
    void suivant();
    void mode();


private:
    Ui::LecteurVue *ui;
    QPushButton *bLancerDiapo;
    QPushButton *bArreterDiapo;
    QPushButton *bPrecedent;
    QPushButton *bSuivant;

};
#endif // LECTEURVUE_H
