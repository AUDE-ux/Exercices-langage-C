#include <stdio.h>
int main()
{
    int i;
    float nombre, moyenne, somme;

    for (i = 0; i < 5; i++)
    {
        printf("\n Entrez la note %d : ", i + 1);
        scanf("%f", &nombre);
        somme += nombre;
    }

    printf("\n La moyenne est : %.2f\n", (float)(somme)/(i + 1));

    return 0;

}