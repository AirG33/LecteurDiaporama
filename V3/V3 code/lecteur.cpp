#include "lecteur.h"

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 5;
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", ":/lecteurDiapo/cartesDisney/Disney_4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", ":/lecteurDiapo/cartesDisney/Disney_21.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", ":/lecteurDiapo/cartesDisney/Disney_19.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "animal", "Pluto", ":/lecteurDiapo/cartesDisney/Disney_30.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(5, "animal", "Bambi", ":/lecteurDiapo/cartesDisney/Disney_3.gif");
    _diaporama.push_back(imageACharger);



    // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    Image* copieImageParcourue;

    for(unsigned int i = 0; i < nbImages() - 1; i++)
    {
        for(unsigned int j = 0; j < nbImages() - 1; j++)
        {
            if (_diaporama[j]->getRang() > _diaporama[j+1]->getRang())
            {
                copieImageParcourue = _diaporama[j];
                _diaporama[j] = _diaporama[j+1];
                _diaporama[j+1] = copieImageParcourue;
            }
        }
    }

    _posImageCourante = 0;

    cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
    cout << nbImages() << " images chargees dans le diaporama" << endl;

}

void Lecteur::avancer()
{
    _posImageCourante = (_posImageCourante + 1) % nbImages();
}

void Lecteur::reculer()
{
    _posImageCourante = (_posImageCourante - 1 + nbImages()) % nbImages();
}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
}

void Lecteur::chargerDiaporama()
{
}

void Lecteur::viderDiaporama()
{

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

void Lecteur::setImage(int numImage)
{
    _posImageCourante = numImage % nbImages();
}

Image *Lecteur::imageCourante()
{
    if(numDiaporamaCourant() == 0 || nbImages() == 0)
    {
        return nullptr;
    }
    else
    {
        return _diaporama[_posImageCourante];
    }
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
