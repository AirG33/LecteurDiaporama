#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
using namespace std;

#include "database.h"


class Image
{
public:
    Image(database* = new database(),
        unsigned int pRang=0,
          string pCategorie="", string pTitre="", string pChemin = "");
    unsigned int getRang();
    string getCategorie();
    string getTitre();
    string getChemin();
    void afficher();           // affiche tous les champs de l'image

    void setRang(unsigned int);
    void setImage(unsigned int);

private:
    unsigned int _rang;         /* rang de l'image au sein du diaporama
                                   auquel l'image est associée */
    string _titre;              // intitulé de l'image
    string _categorie;          // catégorie de l'image (personne, animal, objet)
    string _chemin;             // chemin complet vers le dossier où se trouve l'image
    database *m_dbI;
    unsigned int m_id;
};

#endif // IMAGE_H
