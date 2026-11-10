/*
 Vous devez lire attentivement les programmes donnés ci-dessous pour déterminer s'ils sont valides ou non, et ce sans essayer de les exécuter. Pour chacun des 7 programmes, vous devez afficher sur une ligne soit la lettre « V » pour indiquer que le programme est valide, soit la lettre « I » pour indiquer qu'il est invalide. Par exemple, si vous pensez que les 4 premiers programmes s'exécuteront sans erreur et que les 3 suivants entraîneront des erreurs, faites afficher à votre programme :
↳

V
V
V
V
I
I
I

Voici les sept programmes.

    #include <iostream>
    using namespace std;
    int main()
    {
       int nbBillesRouges = 4;
       int nbBillesBleues = 6;
       cout << (nbBillesRouges + nbBillesBleues) << endl;
    }
    #include <iostream>
    using namespace std;
    int main()
    {
       int taille = 4;
       taille = 6;
       cout << taille << endl;
    }
    #include <iostream>
    using namespace std;
    int main()
    {
       int nbBillesBleues = 3;
       cout << nbBillesRouges << endl;
    }
    #include <iostream>
    using namespace std;
    int main()
    {
       2 = 2;
       cout << 2 << endl;
    }
    #include <iostream>
    using namespace std;
    int main()
    {
       int age1 = 6;
       int age2 = 4;
       age2 = age1;
       cout << age2 << endl;
    }
    #include <iostream>
    using namespace std;
    int main()
    {
       int prix = 10;
       prix - 2 = prix;
       cout << prix << endl;
    }
    #include <iostream>
    using namespace std;
    int main()
    {
       int prix = age - 7;
       int age = 12;
       cout << prix << endl;
    }
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "V" << endl;
    cout << "V" << endl;
    cout << "I" << endl;
    cout << "I" << endl;
    cout << "V" << endl;
    cout << "I" << endl;
    cout << "I" << endl;
}