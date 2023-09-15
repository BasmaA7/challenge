#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float r,c;
    printf("entrer r la valeur de rayon \n");
    scanf("%f", &r);
    c = 2 *M_PI*r;
    printf(" voila la circonférence du cercle c=%f  ",c);
    return 0;
}
