#include "image.h"

#include "qsqlquery.h"
#include <QDebug>
#include <QString>
#include <iostream>
#include <string>

Image::Image(database* bd,
             unsigned int pRang, std::string pCategorie, std::string pTitre, std::string pChemin)
{
    _rang = pRang;
    _categorie = pCategorie;
    _titre = pTitre;
    _chemin = pChemin;
    this->m_dbI = bd;
}

unsigned int Image::getRang()
{
    return _rang;
}

std::string Image::getCategorie()
{
    return _categorie;
}

std::string Image::getTitre()
{
    return _titre;
}

std::string Image::getChemin()
{
    return _chemin;
}

void Image::afficher()
{
    std::cout << "image( rang:" << getRang() << ", titre:" << getTitre() << ", categorie:"
              << getCategorie() << ", chemin:" << getChemin() << ")" << std::endl;
}

void Image::setImage(unsigned int identifiant)
{
    QSqlQuery req;
    if (!this->m_dbI->isAlreadyOpen())
    {
        this->m_dbI->openDatabase();
    }
    req.prepare("SELECT Diapos.titrePhoto, Familles.nomFamille, Diapos.uriPhoto FROM Diapos JOIN Familles ON Diapos.idFam = Familles.idFamille WHERE Diapos.idphoto = ? ;");
    req.addBindValue(identifiant);
    if (!req.exec())
    {
        qDebug() << "Photo indisponible !";
    }
    else
    {
        req.next();
        this->m_id = identifiant;
        this->_titre = req.value(0).toString().toStdString();
        this->_categorie = req.value(1).toString().toStdString();
        this->_chemin = req.value(2).toString().toStdString();
    }
}

void Image::setRang(unsigned int r)
{
    this->_rang = r;
}
