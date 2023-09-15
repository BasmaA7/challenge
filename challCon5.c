#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
 {

    float x1,y1,x2,y2,MN;
    printf("la calculation de la distance entre les deux points M et N");
    printf("entrer la valeur de point M x1 ,y1 \n" );
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("entrer la valeur du point N x2 ,y2 \n");
    scanf("%f",&x2);
    scanf("%f",&y2);
    MN = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("Voila la distance entre (MN) =%f",MN);

    return 0;
}

