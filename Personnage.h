#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include "Arme.h"
#include <string>
#include <iostream>

class Personnage
{
    public:

    Personnage();
    Personnage(std::string m_nomArme, int degatsArme);
    Personnage(Personnage const& persoACopier);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage& cible);
    void changerArme(std::string& nouvelleArme, int degatsNouvelleArme);
    void boirePotionDeVie(int quantitePotion);
    bool estVivant() const;
    void afficherEtat(std::ostream& flux) const;

    private:

    int m_vie;
    int m_mana;
    Arme *m_arme;
};

std::ostream& operator<<(std::ostream& flux, Personnage perso);

#endif // PERSONNAGE_H_INCLUDED
