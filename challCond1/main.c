#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("entrer la valeur: x\n");
    scanf("%d", &x);
    if(x%2==0){
        printf("le nombre est pair");

    }else{
    printf("le nombre est impair");
    }
    return 0;
}
