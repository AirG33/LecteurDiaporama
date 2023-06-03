#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "lecteur.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class Dialog;
class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    enum UnMode {manuel, automatique};
    LecteurVue(int v=3, UnMode m=manuel, QWidget *parent = nullptr);
    ~LecteurVue();
    UnMode getMode();
    int getVitesse();
    void changerVitesse(int);
    void setDialog (Dialog * d);

public slots:
    void lancerDiapo();
    void arreterDiapo();
    void precedent();
    void suivant();
    void aide(); // "À propos de..." ouvre une boîte de message donnant des informations
    void mode();
    void chargerLeDiapo();
    void vitesseDefilement();
    void viderLeDiapo();

private:
    Ui::LecteurVue *ui;
    Dialog * dlg; // Boîte de dialogue permettant de régler la vitesse de défilement
    Lecteur* LeLecteur = new Lecteur();
    UnMode _mode;
    int _vitesse;


};
#endif // LECTEURVUE_H
