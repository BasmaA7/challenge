#include <stdio.h>
#include <stdlib.h>

int main(){
char Nom[20],Prenom[20],Sex[20];
int Age,Numero_De_Telephone;



    printf("Votre Nom:\n" );
    scanf("%s",&Nom);
    printf("Votre Prenom:\n" );
    scanf("%s",&Prenom);
    printf("Votre Sex:\n" );
    scanf("%s",&Sex);
    printf("Votre Age:\n" );
    scanf("%d", &Age);
    printf("Votre Numero De Telephone:\n ");
    scanf("%d", &Numero_De_Telephone);
    printf("Nom: %s, Prenom :%s, Sex :%s, Age: %d, Numero De Telephone: %d",Nom, Prenom, Sex, Age, Numero_De_Telephone);


    return 0;
}
