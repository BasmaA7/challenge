#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
    float x, moy;
    printf("entrer le premier nombre  ");
    scanf("%f", &a);
    printf("entrer le deuxieme nombre  ");
    scanf("%f", &b);
    printf("entrer le troisieme nombre  ");
    scanf("%f", &c);
    printf("entrer le quatrieme nombre  ");
    scanf("%f", &d);
    x=a+b+c+d;
    moy=x/4;
    printf("la somme est : %f\n", x);
    printf("la moyenne est : %f", moy);


    return 0;
}
