/*
Ecrivez un programme qui lit une ligne tapée au clavier et l'affiche en remplaçant tous les espaces par le caractère "_".

CONSTRAINTS
La ligne de texte contient au plus 100 caractères.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            line[i] = '_';
        }
    }
    cout << line << endl;
}