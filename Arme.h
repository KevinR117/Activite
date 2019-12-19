#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

#include <string>
#include <iostream>

class Arme
{
    public:

    Arme();
    Arme(std::string nom, int degats);
    ~Arme() = default;
    void changer(std::string& nom, int degats);
    void afficher(std::ostream& flux) const;
    int getDegats() const;

private:

    std::string m_nom;
    int m_degats;
};

#endif // ARME_H_INCLUDED
