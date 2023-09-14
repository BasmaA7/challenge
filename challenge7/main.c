#include <stdio.h>
#include <stdlib.h>

int main()
{

 int nbr,B,C,D;
    printf(" entrer la valeur nbr \n");
    scanf("%d", &nbr);

        B= nbr/100;
        C=(nbr%100) / 10;
        D=nbr%10;
printf(" la resultat R = %d%d%d",D, C, B);
    return 0;
}
