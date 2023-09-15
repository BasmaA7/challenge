#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("entrer a: et b:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c=a+b;
    if(a=b){
    c=c*3;
    printf("la valeur c et tripler %d \n", c);
    }else{
    printf("a+b=%d \n");
    }
    return 0;

}