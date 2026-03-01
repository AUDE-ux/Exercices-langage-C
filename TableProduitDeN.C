#include <stdio.h>

int main() {
    int n, i, j;

    // Demander la valeur de n
    printf("\n Entrez la valeur de n : ");
    scanf("%d", &n);

    // Afficher l'entête
    printf("\nX*Y| ");
    for (j = 0; j <= n; j++) {
        printf("%d\t", j);
    }
    printf("\n");

    // Ligne de séparation
    for (j = 0; j <= n + 2; j++) {
        printf("-----");
    }
    printf("\n");

    // Afficher la table
    for (i = 0; i <= n; i++) {
        printf("%d  | ", i);
        for (j = 0; j <= n; j++) {
            printf("%d\t", i * j);
        }
        printf("\n\n");
        
    }

    return 0;
}
