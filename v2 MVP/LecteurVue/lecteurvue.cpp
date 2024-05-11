#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);


    // connection SLOTS et SIGNAUX
    connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(demanderAvancer()));
    connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(demanderReculer()));
    connect(ui->bLancerDiapo, SIGNAL(clicked()), this, SLOT(demanderLancer()));
    connect(ui->bArreterDiapo, SIGNAL(clicked()), this, SLOT(demanderArret()));

    connect(ui->acCharger,SIGNAL(triggered()), this, SLOT(on_acCharger_triggered()));
    connect(ui->acVider,SIGNAL(triggered()), this, SLOT(on_acVider_triggered()));
    connect(ui->acQuitter,SIGNAL(triggered()), this, SLOT(on_acQuitter_triggered()));
    connect(ui->acAproposde,SIGNAL(triggered()), this, SLOT(on_acAproposde_triggered()));


}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::demanderAvancer()
{
    qDebug()<<"diapositive suivante demandée"<<Qt::endl;
}

void LecteurVue::demanderReculer()
{
    qDebug()<<"diapositive précédente demandée"<<Qt::endl;
}

void LecteurVue::demanderLancer()
{
    qDebug()<<"demande de lancement du diaporama auto"<<Qt::endl;
}

void LecteurVue::demanderArret()
{
    qDebug()<<"demande d'arrêt du diaporama auto"<<Qt::endl;
}


void LecteurVue::on_acCharger_triggered()
{
    qDebug()<<"demande de chargement d'un diaporama"<<Qt::endl;
}


void LecteurVue::on_acVider_triggered()
{
    qDebug()<<"demande de vider le diaporama actuel"<<Qt::endl;

}


void LecteurVue::on_acQuitter_triggered()
{
    qDebug()<<"demande de quitter l'application"<<Qt::endl;
}


void LecteurVue::on_acAproposde_triggered()
{
    qDebug()<<"demande les informations sur l'application (version, date de créa., auteurs)"<<Qt::endl;
}

