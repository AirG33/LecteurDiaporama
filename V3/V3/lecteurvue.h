#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "lecteur.h"


QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    enum UnMode {manuel, automatique};
    LecteurVue(UnMode m=manuel, QWidget *parent = nullptr);
    ~LecteurVue();
    UnMode getMode();

public slots:
    void lancerDiapo();
    void arreterDiapo();
    void precedent();
    void suivant();
    void aide(); // "À propos de..." ouvre une boîte de message donnant des informations
    void mode();
    void chargerLeDiapo();
    void viderLeDiapo();


private:
    Ui::LecteurVue *ui;
    Lecteur* LeLecteur = new Lecteur();
    UnMode _mode;

};
#endif // LECTEURVUE_H
