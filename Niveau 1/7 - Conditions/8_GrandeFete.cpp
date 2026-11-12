/*
On vous donne une période de temps à étudier, et les dates d'arrivée et de départ d'un certain nombre d'invités d'une fête. Écrivez un programme qui détermine combien d'invités ont été présents à un moment de la période étudiée.

Votre programme doit d'abord lire deux entiers : la date de début et la date de fin de la période étudiée. L'entier suivant, nbInvites, est le nombre total d'invités. Pour chaque invité, votre programme doit ensuite lire deux entiers : sa date d'arrivée et de départ. Un invité est suspect si la période à laquelle il a été présent intersecte la période étudiée. Votre programme doit afficher le nombre d'invités suspects.
*/

#include <iostream>
using namespace std;

bool in(int deb, int fin, int ideb, int ifin)
{
    for (int i = ideb; i <= ifin; i++)
    {
        if ((deb <= i) && (i <= fin))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int sus = 0;
    int deb, fin, inv, ideb, ifin;
    cin >> deb >> fin >> inv;
    for (int i = 0; i < inv; i++)
    {
        cin >> ideb >> ifin;
        if (in(deb, fin, ideb, ifin))
        {
            sus++;
        }
    }
    cout << sus << endl;
}