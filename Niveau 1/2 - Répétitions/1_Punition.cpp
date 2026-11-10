/*
 Votre programme doit écrire 135 fois la phrase : "Je dois respecter le Grand Sorcier.", en plaçant cette phrase exactement une fois sur chaque ligne. Attention, si votre programme n'affiche pas exactement cette phrase avec les points et la majuscule là où il faut, il faudra tout recommencer.

Important : votre programme ne doit pas faire plus d'une douzaine de lignes.
*/

#include <iostream>
#define repeat(nb) for (int _rep = 0, _max = (nb); _rep < _max; _rep++)
using namespace std;

int main()
{
    repeat(135)
    {
        cout << "Je dois respecter le Grand Sorcier." << endl;
    }
}