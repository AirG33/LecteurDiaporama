#include "lecteur.h"
#include <QSqlQuery>

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::premiereImage()
{
    (*this)._posImageCourante=0;
}

void Lecteur::avancer()
{
    unsigned int indiceR;
        indiceR=(*this)._posImageCourante;
        if (indiceR<nbImages()-1)
        {
            (*this)._posImageCourante=indiceR+1;
        }
        else
        {
            (*this)._posImageCourante=0;
        }
}

void Lecteur::reculer()
{
    unsigned int indiceR;
        indiceR=(*this)._posImageCourante;
        if (indiceR>0)
        {
            (*this)._posImageCourante=indiceR-1;
        }
        else
        {
            (*this)._posImageCourante = nbImages()-1;
        }
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    mydb = new Database;
    mydb->openDataBase();
    QSqlQuery query;
    QString MaRequete("SELECT idphoto, nomFamille, titrePhoto, uriPhoto "
                      "FROM Diapos "
                      "JOIN Familles ON Diapos.idFam = Familles.idFamille ");

    if (query.exec(MaRequete))
    {
        for(int i = 0; query.next(); i++)
        {
            imageACharger = new Image(query.value(0).toInt(),
                                      query.value(1).toString().toStdString(),
                                      query.value(2).toString().toStdString(),
                                      ":/v2" + query.value(3).toString().toStdString());
            _diaporama.push_back(imageACharger);
        }
    }

    Image* copieImage;

    for(unsigned int i = 0; i < nbImages() - 1; i++)
    {
        for(unsigned int j = 0; j < nbImages() - 1; j++)
        {
            if (_diaporama[j]->getRang() > _diaporama[j+1]->getRang())
            {
                copieImage = _diaporama[j];
                _diaporama[j] = _diaporama[j+1];
                _diaporama[j+1] = copieImage;
            }
        }
    }

     _posImageCourante=0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante=0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void Lecteur::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */
    if (numDiaporamaCourant() == 0)
    {
        cout << "Lecteur vide" << endl;
    }
    else
    {
        cout << "Diaporama num. " << numDiaporamaCourant() << endl;

        if (nbImages() == 0)
        {
            cout << "Diaporama vide" << endl;
        }
        else
        {
            cout << "Image courante : ";
            imageCourante()->afficher();
        }
    }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

Image *Lecteur::imageCourante()
{
    return (*this)._diaporama[(*this)._posImageCourante];
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return (*this)._numDiaporamaCourant;
}
