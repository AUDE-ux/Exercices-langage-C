#include <stdio.h>
int main()
{
    int i;
    float nombre, moyenne, somme;

    for (i = 1; i <= 5; i++)
    {
        printf("Entrez la note %d : ", i);
        scanf("%f", &nombre);
        somme += nombre;
    }

    moyenne = somme / 5;
    printf("La moyenne est : %.2f\n", moyenne);

}