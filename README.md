# FranceIOI en C++

Ce dépôt regroupe mes solutions en **C++** aux exercices de la plateforme [France-IOI](https://www.france-ioi.org/).

Ce travail est une manière de progresser régulièrement en algorithmique. À l'ère de l'IA, l'objectif est aussi de continuer à résoudre les problèmes par moi-même, de comprendre mes erreurs et de développer mes compétences.

## Progression

Les exercices sont classés par chapitre du **niveau 1** :

| Chapitre | Thème | Exercices |
| --- | --- | ---: |
| 1 | Affichage | 6 |
| 2 | Répétitions | 10 |
| 3 | Calculs | 13 |
| 4 | Lecture | 10 |
| 5 | Tests | 8 |
| 6 | Structures | 8 |
| 7 | Conditions | 3 |

Le dépôt contient actuellement **58 exercices**. La progression sera complétée au fur et à mesure de la résolution de nouveaux problèmes.

## Organisation du dépôt

```text
Niveau 1/
├── 1 - Affichage/
├── 2 - Répétitions/
├── 3 - Calculs/
├── 4 - Lecture/
├── 5 - Tests/
├── 6 - Structures/
└── 7 - Conditions/
```

Chaque fichier `.cpp` correspond à un exercice indépendant. Les commentaires placés en tête des fichiers rappellent l'énoncé du problème.

## Compiler et exécuter une solution

Depuis le dossier contenant le fichier source, avec `g++` :

```bash
g++ -std=c++17 -Wall -Wextra -pedantic solution.cpp -o solution
./solution
```

Sous Windows, l'exécutable peut être lancé avec :

```powershell
.\solution.exe
```

Les programmes lisent généralement leurs données sur l'entrée standard, comme sur France-IOI. Il est donc possible de fournir un fichier d'entrée :

```bash
./solution < entree.txt
```

## Objectifs

- avancer chapitre par chapitre ;
- écrire des solutions lisibles et compréhensibles ;
- apprendre de nouvelles notions avant de les réutiliser ;
- revenir sur les solutions pour les améliorer lorsque cela est pertinent.

Le dépôt est un carnet de progression personnel : les solutions peuvent donc évoluer avec mes connaissances.