#include "Personnage.h"
#include "Arme.h"

using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100)
{
    m_arme = new Arme();
}

Personnage::Personnage(Personnage const& persoACopier) : m_vie(persoACopier.m_vie), m_mana(persoACopier.m_mana), m_arme(0)
{
    m_arme = new Arme(*(persoACopier.m_arme));
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(0)
{
    m_arme = new Arme(nomArme, degatsArme);
}

Personnage::~Personnage()
{
    delete m_arme;
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    if (m_vie<0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage& cible)
{
    cible.recevoirDegats(m_arme -> getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if (m_vie >100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string& nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const
    {
        return m_vie > 0;
    }

void Personnage::afficherEtat() const
{
    cout << "Le personnage a " << m_vie << " points de vie et " << m_mana << " points de magie" << endl;
    m_arme->afficher();
}
