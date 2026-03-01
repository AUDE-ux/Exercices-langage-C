#include <stdio.h>
int main() {
    int notes[10];
    int i;
    int somme ;
    float moyenne;

    // Saisie des notes par l'utilisateur.
    printf("Entrez les 10 notes :\n");
    for (i = 0; i < 10; i++) {
        printf("Note %d: ", i + 1);
        scanf("%d", &notes[i]);
    }

    //Affichage des notes saisies par l'utilisateur.
    printf("\nLes notes saisies sont :\n");
    for (i = 0; i < 10; i++) {
        printf("Note %d: %d\n", i + 1, notes[i]);
    }
    // Affichage de la moyenne des notes saisies par l'utilisateur.
     
    somme = 0;
    for (i = 0; i < 10; i++) {
        somme += notes[i];
    }
    moyenne = (float)somme / 10;
    printf("\nLa moyenne des notes saisies est : %.2f\n", moyenne);
   
   
    return 0;
}
