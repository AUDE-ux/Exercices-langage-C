#include <stdio.h>
int main ()
{
    int a, b, c;
    printf("\n Entrez a : ");
    scanf("%d",&a);

    printf("\n Entrez b : ");
    scanf("%d",&b);

    printf("\n Avant  a est %d et b est %d ", a, b);

    c = a;
    a = b;
    b = c;

    printf("\n Apres  a devient : %d  et b devient : %d ", a, b );
    return 0;
}