#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{

    ui->setupUi(this);
    connect(bLancerDiapo, SIGNAL(clicked()),this, SLOT(Lance()));
    connect(bArreterDiapo, SIGNAL(clicked()),this, SLOT(Quitter()));
    connect(bPrecedent, SIGNAL(clicked()),this, SLOT(Recule()));
    connect(bSuivant, SIGNAL(clicked()),this, SLOT(Avance()));

}

LecteurVue::~LecteurVue()
{
    delete ui;

}

void LecteurVue::lancerDiapo()
{
     qDebug() << tr("le diapo ce lance") << Qt::endl;
}

void LecteurVue::arreterDiapo()
{
     qDebug() << tr("le diapo s'arrete") << Qt::endl;
}

void LecteurVue::precedent()
{
     qDebug() << tr("diapositive précedente") << Qt::endl;
}

void LecteurVue::suivant()
{
     qDebug() << tr("diapositive suivante") << Qt::endl;
}


void LecteurVue::mode()
{
     qDebug() << tr("changement de mode!") << Qt::endl;

}




