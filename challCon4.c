#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

 float delta,a,b,c,x;
printf("entrer les trois valeurs de a,b,c :\n");
scanf("%f %f %f," ,&a,&b,&c);
delta = pow(b,2)-(4*a*c);
if (delta<0)
    printf("il y'a pas de solution");
else if (delta==0) {
    printf("il y'a une solution %f",x);
  x=-b/(2*a);
}
  else
    printf("dans de programme en calculer que le delta=0 ou delta<0");

    return 0;
}
