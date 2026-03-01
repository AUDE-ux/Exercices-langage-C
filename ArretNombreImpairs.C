#include <stdio.h>

int main() {
    int nombre;
    int compteurImpairs = 0;
    int sommeImpairs = 0;

    printf("\n Saisissez des nombres (Arret apres 5 nombres impairs) \n");

    do {
        printf("\n Entrez un nombre : ");
        scanf("%d", &nombre);

        if (nombre % 2 != 0) {
            compteurImpairs++;
            sommeImpairs += nombre;
            printf("\n Impair detecte ! (%d/5)\n", compteurImpairs);
        }

    } while (compteurImpairs < 5);

    
    printf("\n Termine ! Vous avez saisi 5 nombres impairs.\n");
    printf("\n Le total des nombres impairs est : %d\n", sommeImpairs);

    return 0;
}