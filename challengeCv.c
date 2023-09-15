#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("entrez un alphabet ");
    scanf("%c",&x);
    switch(x)
    {
    case 'a':
    printf("une voyelle\n");
    break;
    case 'e':
    printf("une voyelle\n");
    break;
    case 'o':
    printf("une voyelle\n");
    break;
    case 'u':
    printf("une voyelle\n");
    break;
    case 'i':
    printf("une voyelle\n");
    break;
    default:
    printf("ce caractere est pas une voyelle\n");


    }
    return 0;
}