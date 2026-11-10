/*
Sachant qu 'il y a actuellement 1337 crapauds et que leur nombre double chaque semaine, votre programme devra afficher le nombre de crapauds qu' il y aura après la 12e semaine.

    Important : vous devez utiliser une boucle pour calculer le nombre de crapauds.
*/

#include <iostream>
using namespace std;

int main()
{
    int nb = 1337;
    for (int i = 0; i < 12; i++)
    {
        nb = nb * 2;
    }
    cout << nb << endl;
}