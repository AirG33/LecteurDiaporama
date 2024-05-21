#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include <QTimer>
#include <QDebug>
#include "QMessageBox"

#include "lecteur.h"
#include "image.h"

lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    ui->setupUi(this);


    connect(ui->bAvancer, SIGNAL(clicked()), this, SLOT(avancer()));
    connect(ui->bReculer, SIGNAL(clicked()), this, SLOT(reculer()));
    connect(ui->bLancerDiapo, SIGNAL(clicked()), this, SLOT(lancerDiapo()));
    connect(ui->bArreterDiapo, SIGNAL(clicked()), this, SLOT(arreterDiapo()));


    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionCharger_Diaporama, SIGNAL(triggered()), this, SLOT(chargerDiapo()));
    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(changerVitesseDiapo()));
    connect(ui->actionEnlever_Diaporama, SIGNAL(triggered()), this, SLOT(enleverDiapo()));
    connect(ui->actionA_propos_de,SIGNAL(triggered()), this, SLOT(afficherAProposDe()));
    // Changement de l'affichage des boutons( a mettre au depart et pas ici)
    ui->bAvancer->setEnabled(true);
    ui->bReculer->setEnabled(true);
    ui->bLancerDiapo->setEnabled(true);


    // Modification du titre
    ui->lTitreDiapo->setText("Titre du Diapo");

    // Récupérer le nombre max d'images
    nbrImage.setNum(monLecteur->nbImages());
    ui->lTotalImage->setText(nbrImage);

    // Mise à jour de l'affichage
    this->majImage();

}

void lecteurvue::avancer()
{
    // qDebug() << "L'utilisateur avance";
    monLecteur->avancer();
    this->majImage();
}

void lecteurvue::reculer()
{
    // qDebug() << "L'utilisateur recule";
    monLecteur->reculer();
    this->majImage();
}

void lecteurvue::majImage()
{
    // MAJ Titre
    titreImg = QString::fromStdString(monLecteur->imageCourante()->getTitre());
    ui->lTitreImage->setText(titreImg);

    // MAJ Rang
    rangImg.setNum(monLecteur->imageCourante()->getRang());
    ui->lRang->setText(rangImg);

    // MAJ Chemin
    cheminImg = QString::fromStdString(monLecteur->imageCourante()->getChemin());
    ui->lImage->setPixmap(QPixmap(cheminImg));
}

void lecteurvue::lancerDiapo()
{
    qDebug() << "L'utilisateur lance le diaporama";
    // MAJ Boutons : Les boutons bAvancer et bReculer doivent permettre d'arrêter le modeAuto lorsqu'il est activé.

    // Mise en utilisation du bouton bArreterDiapo
    ui->bArreterDiapo->setEnabled(true);

}

void lecteurvue::arreterDiapo()
{
    qDebug() << "L'utilisateur arrete le diaporama";
    ui->bArreterDiapo->setEnabled(false);

}


void lecteurvue::chargerDiapo()
{
    qDebug() << "L'utilisateur charge un diaporama";

}

void lecteurvue::changerVitesseDiapo()
{
    qDebug() << "L'utilisateur change de vitesse de diaporama";
}

void lecteurvue::enleverDiapo()
{
    qDebug() << "L'utilisateur enlève le diaporama";
}

void lecteurvue::afficherAProposDe()
{
    QMessageBox::information(this, "A propos de ", "Version : V3\n"
                                                   "Date de Création : 07/05/2024\n"
                                                   "Auteurs : Autant Félix\n"
                                                   "          Gentil Rémi\n");
}

lecteurvue::~lecteurvue()
{
    delete ui;
}
