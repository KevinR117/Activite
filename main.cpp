#include <iostream>
#include <string>
#include "Personnage.h"
#include "Arme.h"

using namespace std;

int main()
{
    Personnage perso1;
    Personnage perso2(perso1);

    perso1.afficherEtat();

    perso1.adresseArme();

    return 0;
}
