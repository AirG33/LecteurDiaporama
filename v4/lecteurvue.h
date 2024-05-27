#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QtWidgets>
#include "lecteur.h"

        QT_BEGIN_NAMESPACE
namespace Ui { class lecteurvue; }
QT_END_NAMESPACE

class lecteurvue : public QMainWindow

{
    Q_OBJECT

public:
    lecteurvue(QWidget *parent = nullptr);
    ~lecteurvue();

private:
    Ui::lecteurvue *ui;
    Lecteur* monLecteur = new Lecteur();

    QTimer *monTimer;

private :
    QString titreImg; // Titre de l'image courante
    QString rangImg; // Rang (position) de l'image courante
    QString cheminImg; // Chemin du fichier de l'image courante
    QString nbrImage; // Nombre total d'images dans le diaporama

public slots :
    void avancer(); // Slot pour avancer à l'image suivante
    void reculer(); // Slot pour reculer à l'image précédente
    void majImage(); // Slot pour mettre à jour l'affichage de l'image courante
    void lancerDiapo(); // Slot pour lancer le diaporama (défilement automatique)
    void arreterDiapo(); // Slot pour arrêter le diaporama
    void chargerDiapo(); // Slot pour charger un nouveau diaporama
    void changerVitesseDiapo(); // Slot pour changer la vitesse de défilement du diaporama
    void enleverDiapo(); // Slot pour enlever le diaporama actuel
    void afficherAProposDe(); // Slot pour afficher une fenêtre "À propos de"
};

#endif // LECTEURVUE_H
