#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int a, nombre;
    
    printf("Entrez un nombre entier : ");
    
    scanf("%d", &a);
    
    nombre = a % 2 == 0 ? printf("Le nombre %d est pair.\n", a) : printf("Le nombre %d est impair.\n", a);
    
    nombre = a > 10 ? printf ("houra\n") : printf("hara\n");
    
    nombre = a < 50 ? printf("Fiesta\n") : printf("coq\n");
    
    return 0;
}