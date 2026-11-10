/*
 Votre programme lira d'abord un entier représentant le nombre de montées et descentes que vous avez réalisées. Pour chaque montée ou descente, il faut ensuite lire un entier représentant la variation d'altitude, cet entier étant strictement positif dans le cas d'une montée et strictement négatif dans le cas d'une descente (il n'y a rien à compter pour les tronçons qui sont bien à plat). Votre programme devra afficher l'altitude totale montée puis l'altitude totale descendue (ces deux nombres sont positifs).
 */

#include <iostream>
using namespace std;

int main()
{
    int nb, path, totD = 0, totM = 0;
    cin >> nb;
    for (int i = 0; i < nb; i++)
    {
        cin >> path;
        if (path > 0)
        {
            totM += path;
        }
        else
        {
            totD += -path;
        }
    }
    cout << totM << endl;
    cout << totD << endl;
}