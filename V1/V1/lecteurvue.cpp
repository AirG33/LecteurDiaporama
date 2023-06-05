#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{

    ui->setupUi(this);
    connect(ui ->bLancerDiapo, SIGNAL(clicked()),this, SLOT(lancerDiapo()));
    connect(ui ->bArreterDiapo, SIGNAL(clicked()),this, SLOT(arreterDiapo()));
    connect(ui ->bPrecedent, SIGNAL(clicked()),this, SLOT(precedent()));
    connect(ui ->bSuivant, SIGNAL(clicked()),this, SLOT(suivant()));

}

LecteurVue::~LecteurVue()
{
    delete ui;

}

void LecteurVue::lancerDiapo()
{
     qDebug() << tr("le diapo se lance") << Qt::endl;
}

void LecteurVue::arreterDiapo()
{
     qDebug() << tr("le diapo s'arrête") << Qt::endl;
}

void LecteurVue::precedent()
{
     qDebug() << tr("diapositive précédente") << Qt::endl;
}

void LecteurVue::suivant()
{
     qDebug() << tr("diapositive suivante") << Qt::endl;
}

void LecteurVue::mode()
{


}


