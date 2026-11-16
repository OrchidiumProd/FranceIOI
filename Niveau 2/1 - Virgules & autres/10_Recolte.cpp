/*
 Votre programme doit commencer par lire un entier nbPersonnes puis un entier nbFruits. Il doit ensuite afficher "oui" si nbFruits est un multiple de nbPersonnes, et "non" dans le cas contraire.
 */

#include <iostream>
using namespace std;

int main()
{
    int nbPersonnes, nbFruits;
    cin >> nbPersonnes >> nbFruits;
    if (nbFruits % nbPersonnes == 0)
    {
        cout << "oui" << endl;
    }
    else
    {
        cout << "non" << endl;
    }
}