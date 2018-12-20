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
    int modeJeux = 0;
    int continuer = 1;
    int niveau = 0;
    int compteur1 = 0;
    int compteur2 = 0;
    int nombreMyster1 = 0;
    int nombreMyster2 = 0;
    int nombreEntrer1 = 0;
    int nombreEntrer2 = 0;
    int MAX = 0;
    int MIN = 0;
    int nombreJoueur = 0;
    char Nom[100], Joueur1[100], Joueur2[100];

    while(continuer != 0)
    {
      while (nombreJoueur <= 0 || nombreJoueur >= 3)
      {
        printf("Choix du nombre de joueur:\n1 Joueur\n2 Joueur\n");
        scanf("%d", &nombreJoueur);
      }

      switch (nombreJoueur)
      {
        case 1:
          {
            printf("Joueur 1 entrer votre nom:\n");
            scanf("%s", Joueur1);
            modeJeux = 1;
          }
          break;
        case 2:
          {
            printf("Joueur 1 entrer votre nom:\n");
            scanf("%s",Joueur1);
            printf("Joueur 2 entrer votre nom: \n");
            scanf("%s",Joueur2);
            modeJeux = 2;
          }
          break;
        default:
          break;

      }

      while (niveau <= 0 || niveau >= 4)
      {
          printf("Bonjour choisi un niveaux:\n1 Facile\n2 Moyen\n3 Difficile\n");
          scanf("%d", &niveau);
      }
      switch (niveau)
      {
        case 1:
        {
          printf("Niveau 1: 0 a 100\n");
          MAX = 100;
          nombreMyster1 = (rand() % (MAX - MIN + 1)) + MIN;
          nombreMyster2 = (rand() % (MAX - MIN + 1)) + MIN;
          printf("%d nombreMyster1\n%d nombreMyster2\n", nombreMyster1, nombreMyster2);
          break;
        }
        case 2:
        {
          printf("Niveau 2: 0 a 500\n");
          MAX = 500;
          nombreMyster1 = (rand() % (MAX - MIN + 1)) + MIN;
          nombreMyster2 = (rand() % (MAX - MIN + 1)) + MIN;
          break;
        }
        case 3:
        {
          printf("Niveau 3: 0 a 1000\n");
          MAX = 1000;
          nombreMyster1 = (rand() % (MAX - MIN + 1)) + MIN;
          nombreMyster2 = (rand() % (MAX - MIN + 1)) + MIN;
          break;
        }
        default:
          break;
      }
      switch (nombreJoueur)
      {
        case 1:
        {
        while (nombreEntrer1 != nombreMyster1)
          {
            {
              printf("%s entrer un nombre:\n", Joueur1);
              scanf("%d", &nombreEntrer1);
            }
            if (nombreEntrer1 <= MAX && nombreEntrer1 >= MIN)
            {
              if (nombreEntrer1 < nombreMyster1)
              {
                printf("C'est plus!\n");
                compteur1++;
              }
              else if (nombreEntrer1 > nombreMyster1)
              {
                printf("C'est moins!\n");
                compteur1++;
              }
              else
              {
                compteur1++;
                printf("Bravo %s vous avez trouver en %d coups\n", Joueur1, compteur1);
              }
            }
            else
            {
              printf("Nombre entre %d et %d\n", MIN, MAX);
            }
          }
        }
          break;
        case 2:
        {
          while (nombreEntrer1 != nombreMyster1)
            {
              {
                printf("%s entrer un nombre:\n", Joueur1);
                scanf("%d", &nombreEntrer1);
              }
              if (nombreEntrer1 <= MAX && nombreEntrer1 >= MIN)
              {
                if (nombreEntrer1 < nombreMyster1)
                {
                  printf("C'est plus!\n");
                  compteur1++;
                }
                else if (nombreEntrer1 > nombreMyster1)
                {
                  printf("C'est moins!\n");
                  compteur1++;
                }
                else
                {
                  compteur1++;
                  printf("Bravo %s vous avez trouver en %d coups\n", Joueur1, compteur1);
                }
              }
              else
              {
                printf("Nombre entre %d et %d\n", MIN, MAX);
              }
            }
            while (nombreEntrer2 != nombreMyster2)
              {
                {
                  printf("%s entrer un nombre:\n", Joueur2);
                  scanf("%d", &nombreEntrer2);
                }
                if (nombreEntrer2 <= MAX && nombreEntrer2 >= MIN)
                {
                  if (nombreEntrer2 < nombreMyster2)
                  {
                    printf("C'est plus!\n");
                    compteur2++;
                  }
                  else if (nombreEntrer2 > nombreMyster2)
                  {
                    printf("C'est moins!\n");
                    compteur2++;
                  }
                  else
                  {
                    compteur2++;
                    printf("Bravo %s vous avez trouver en %d coups\n", Joueur2, compteur2);
                  }
                }
                else
                {
                  printf("Nombre entre %d et %d\n", MIN, MAX);
                }
              }

          break;
        default:
          break;
        }
      }
    if (compteur1 == compteur2)
    {
      printf("Egalite!!!\n");
    }
    else if (compteur1 < compteur2)
    {
      printf("%s a gagner!!!\n", Joueur1);
    }
    else
    {
      printf("%s a gagner!!!\n", Joueur2);
    }
    printf("Voulez-vous Rejouer?\n1: Oui\n0: Non\n");
    scanf("%d", &continuer);
    niveau = 0, nombreJoueur = 0, nombreEntrer1 = 0, compteur1 = 0, compteur2 = 0;
  }

    return 0;
}
