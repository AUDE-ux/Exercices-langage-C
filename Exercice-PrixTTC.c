#include <stdio.h>

int main() 

{
    float prixUnitaire, prixHT, TVA, remise, prixRemise, prixTTC;

    int quantite, jour;

    // Saisie des informations par l'utilisateur.

    printf("\n Entrez le prix unitaire : ");
    scanf("%f", &prixUnitaire);

    printf("\n Entrer la quantité (le nombre d'article) :" );
    scanf("%d",&quantite);

    printf("\n Entrez la TVA (en pourcentage %) : ");
    scanf("%f", &TVA);

    printf("\n Entrez le jour de la semaine (1 = lundi ... 7 = dimanche) : ");
    scanf("%d", &jour);

    prixHT = prixUnitaire * quantite;

    // Déterminons  les remises.

    if (prixHT < 50000) {
        remise = 5;

    } else if (prixHT <= 100000) {
        remise = 10;

    } else {
        remise = 15;
    }

    // Remise supplémentaire pour le  samedi ou dimanche.

    if (jour == 6 || jour == 7) {
        remise = remise + 2;

        // par simplification on peut avoir  : remise += 2
    }


    // Calcul du prix après remise (le prixDeRemise)

    prixRemise = prixHT - (prixHT * remise / 100);

    // Calcul du prix TTC

    prixTTC = prixRemise + (prixRemise * TVA / 100);

    // Affichage des résultats finaux!


    printf("\n Prix initial HT : %.2f\n", prixHT);

    printf("\n Remise appliquée : %.2f %%\n", remise);

    printf("\n Prix final TTC : %.2f\n\n", prixTTC);

    return 0;
}