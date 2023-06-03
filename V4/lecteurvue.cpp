#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include "dialog.h"

#include <QDebug>
#include <QTimer>

#include "QMessageBox"

#include "lecteur.h"
#include "image.h"

LecteurVue::LecteurVue(int v, UnMode m, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
    , _mode(m)
    , _vitesse(v)
{

    ui->setupUi(this);
    ui->bPrecedent->setEnabled(false);
    ui->bSuivant->setEnabled(false);
    ui->CBMode->setEnabled(false);
    ui->bLancerDiapo->setEnabled(false);
    ui->bArreterDiapo->setEnabled(false);

    connect(ui ->bLancerDiapo, SIGNAL(clicked()),this, SLOT(lancerDiapo()));
    connect(ui ->bArreterDiapo, SIGNAL(clicked()),this, SLOT(arreterDiapo()));
    connect(ui ->bPrecedent, SIGNAL(clicked()),this, SLOT(precedent()));
    connect(ui ->bSuivant, SIGNAL(clicked()),this, SLOT(suivant()));
    connect(ui->actionCharger_diaporama,SIGNAL(triggered()), this, SLOT(chargerLeDiapo()));
    connect(ui->actionVitesse,SIGNAL(triggered()), this, SLOT(vitesseDefilement()));
    connect(ui->actionEnlever_diaporama,SIGNAL(triggered()), this, SLOT(viderLeDiapo()));
    connect(ui->actionAide,SIGNAL(triggered()), this, SLOT(aide()));
    connect(ui->CBMode,SIGNAL(currentIndexChanged(int)), this, SLOT(mode()));


}

// Fonction délai pour attendre 2 secondes
inline void delay(int millisecondsWait)
{
    QEventLoop loop;
    QTimer t;
    t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
    t.start(millisecondsWait);
    loop.exec();
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::lancerDiapo()
{
    qDebug() << tr("le diapo se lance") << Qt::endl;
    ui->CBMode->setEnabled(false);
    ui->bLancerDiapo->setEnabled(false);
    ui->bArreterDiapo->setEnabled(true);
    do
    {
        suivant();
        delay(6000/getVitesse());
    } while (ui->bArreterDiapo->isEnabled());
    // Tant que le diaporama n'a pas été arrêté, (l'arrêter rend le bouton Arrêter diapo inutilisable).
}

void LecteurVue::chargerLeDiapo()
{
    qDebug() << "L'utilisateur vide le diaporama";

    LeLecteur->changerDiaporama(1);
    Image *image = LeLecteur->imageCourante();
    QString imageAffichee = QString::fromStdString(image->getChemin());
    QString imageTitre = QString::fromStdString(image->getTitre());

    ui->lTitre->setText(imageTitre);
    ui->lImage->setPixmap(QPixmap(imageAffichee));
    ui->CBMode->setEnabled(true);
    mode(); // Active le mode sélectionné au chargement du diaporama

}

void LecteurVue::viderLeDiapo()
{
    qDebug() << "L'utilisateur vide le diaporama";

    LeLecteur->changerDiaporama(0);
    Image *image = LeLecteur->imageCourante();

    ui->lTitre->setText(QString::fromStdString(image->getTitre()));
    ui->lImage->setPixmap(QPixmap(QString::fromStdString(image->getChemin())));
    ui->bPrecedent->setEnabled(false);
    ui->bSuivant->setEnabled(false);
    ui->CBMode->setEnabled(false);
    ui->bLancerDiapo->setEnabled(false);
    ui->bArreterDiapo->setEnabled(false);
}

void LecteurVue::arreterDiapo()
{
     qDebug() << tr("le diapo s'arrête") << Qt::endl;
     ui->CBMode->setEnabled(true);
     ui->bLancerDiapo->setEnabled(true);
     ui->bArreterDiapo->setEnabled(false);
}

void LecteurVue::suivant()
{
    LeLecteur->avancer();
    Image *image = LeLecteur->imageCourante();

    ui->lTitre->setText(QString::fromStdString(image->getTitre()));
    ui->lImage->setPixmap(QPixmap(QString::fromStdString(image->getChemin())));
}

void LecteurVue::precedent()
{
    LeLecteur->reculer();
    Image *image = LeLecteur->imageCourante();

    ui->lTitre->setText(QString::fromStdString(image->getTitre()));
    ui->lImage->setPixmap(QPixmap(QString::fromStdString(image->getChemin())));
}

void LecteurVue::aide()
{
    qDebug() << "J'affiche le A Propos de" << Qt::endl;
    QMessageBox msgBox;
    msgBox.setText("Version : 4 \n "
                   "Date de dernière modification : 01/06/2023 \n "
                   "Auteur : LAGÜE Théo, GENTIL Rémi, AUDOUARD RAPHAEL");
    msgBox.exec();
}

void LecteurVue::vitesseDefilement()
{
    dlg->show();
}

void LecteurVue::mode()
{
    if (ui->CBMode->currentText() == "Mode Automatique")
    {
        _mode = automatique;
        ui->bPrecedent->setEnabled(false);
        ui->bSuivant->setEnabled(false);
        ui->bLancerDiapo->setEnabled(true);
        ui->bArreterDiapo->setEnabled(false);
        qDebug() << "Mode automatique" << Qt::endl;
    }
    else
    {
        arreterDiapo();
        _mode = manuel;
        ui->bPrecedent->setEnabled(true);
        ui->bSuivant->setEnabled(true);
        ui->bLancerDiapo->setEnabled(false);
        ui->bArreterDiapo->setEnabled(false);
        qDebug() << "Mode manuel" << Qt::endl;
    }
}

LecteurVue::UnMode LecteurVue::getMode()
{
    return _mode;
}

void LecteurVue::setDialog(Dialog * d)
{
    dlg = d;
}

void LecteurVue::changerVitesse(int nouvelleVitesse)
{
    _vitesse = nouvelleVitesse;
    qDebug() << "Nouvelle vitesse : x" << _vitesse << Qt::endl;
}

int LecteurVue::getVitesse()
{
    return _vitesse;
}
