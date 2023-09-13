#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;
  float add, mult, sust, rest, c;

  printf("entrer le premier nombre : ");
  scanf("%d", &a);
  printf("entrer le deuxieme nombre : ");
  scanf("%d", &b);
  add=a+b;
  mult=a*b;
  sust=a-b;
  rest=a%b;
  c=a/b;
  printf("la somme de %d et %d est : %f\n", a,b,add);
  printf("la soustraction de %d et %d est : %f\n", a,b,sust);
  printf("la multiplication de %d et %d est : %f\n", a,b, mult);
  printf("la division de %d et %d est : %f\n", a,b,c);
  printf("le reste de la division de %d et %d est : %f", a,b,rest);

    return 0;
}
