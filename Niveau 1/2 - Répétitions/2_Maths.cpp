/*
 Corrigez les erreurs contenues dans le programme ci-dessous afin qu'il affiche 13 fois de suite le texte 9 * 8 = 72.
#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
   repeat 13
   {
      cout << "9 * 8 = 72 << endl;
   }
}
*/

#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;

int main()
{
    repeat(13)
    {
        cout << "9 * 8 = 72" << endl;
    }
}