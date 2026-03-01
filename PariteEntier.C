#include <stdio.h>
int main ()
{
    int a;

    printf("\n Entrez un entier positif : ");
    scanf("%d", &a);

    if (a % 2 == 0) {

        printf("\n Le nombre %d est pair ",a);

        }
        else {
            printf("\n Le nombre %d est impair ",a);
        }
    return 0;
}