#include<stdio.h>
#include<stdlib.h>
int main()
{
    int jour;

    printf("Entrez un nombre entre 1 et 7 : ");
    scanf("%d", &jour);

    switch (jour) 
    {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("Erreur : Vous devez entrer un nombre entre 1 et 7.\n");
            break;

    }
    jour = jour >= 1 && jour <= 5 ? printf("C'est un jour de semaine.\n") : printf("C'est le week-end.\n");
    return 0;
}