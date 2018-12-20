//  main.c
//  jeux
//  Created by nrv59 on 17/05/2018.
//  Copyright © 2018 Nrv59. All rights reserved.
//

#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int main(int argc, const char * argv[])
{
    srand(time(NULL));

    int niveau = 0;
    int compteur1 = 0;
    int compteur2 = 0;
    int nombreMyster1 = 0;
    int nombreMystere2 = 0;
    int nombreEntrer = 0;
    int continuer = 1;
    int MAX = 0;
    int MIN = 0;
    int nombreJoueur = 0;

    while (nombreJoueur <= 0 || nombreJoueur >= 3)
    {
      printf("Choix du nombre de joueur:\n1 Joueur\n2 Joueur\n?");
      scanf("%d", &nombreJoueur);
    }

    while (niveau <= 0 || niveau >= 4)
    {
        printf("Bonjour choisi un niveaux:\n1 Facile\n2 Moyen\n3 Difficile\n?");
        scanf("%d", &niveau);
    }

    switch (niveau)
    {
    case 1:
    {
      printf("Niveau 1: 0 a 100\n");
      const int MAX = 100, MIN = 0;
      nombreMyster1 = (rand() % (MAX - MIN + 1)) + MIN;
      break;
    }
    case 2:
    {
      printf("Niveau 2: 0 a 500\n");
      const int MAX = 500, MIN = 0;
      nombreMyster1 = (rand() % (MAX - MIN + 1)) + MIN;
      break;
    }
    case 3:
    {
      printf("Niveau 3: 0 a 1000\n");
      nombreMyster1 = (rand() % (MAX - MIN + 1)) + MIN;
      break;
    }
    default:
      break;
    }
    switch (nombreJoueur)
    {
      case 1:
      {
        while (nombreEntrer != nombreMyster1 )
        {
          {
            printf("Entrer un nombre?\n");
            printf("%d\n", nombreMyster1);
            scanf("%d", &nombreEntrer);
          }

          if ((nombreEntrer >= MAX) || (nombreEntrer <= MIN))
          {
            if (nombreEntrer < nombreMyster1)
            {
              printf("C'est plus!\n");
            }
            else if (nombreEntrer > nombreMyster1)
            {
              printf("C'est moins!\n");
            }
            else
            {
              printf("Bravo\n");
            }
          }

        }
      }
    }
    return 0;
}
