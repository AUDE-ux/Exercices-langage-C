#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nombre;
    printf("\n Entrez un nombre entier : ");
    scanf("%d", &nombre);
    for (int i = 1; i <= 12; i++) 
    {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }
}