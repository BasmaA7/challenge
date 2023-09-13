#include <stdio.h>
#include <stdlib.h>

int main()
{
float c,f;
printf("Enregistrer la tamperature en   Fahrenheit" );
scanf("%f",&f);
c = (f-32)/1.8;
if(c<=4){
printf("Tres froid");
}
else if (c>=5 && c<=20){
   printf("Foid") ;
}
else if (c>=21 && c<=30){
    printf("Chaud");

}
else if (c>=31 && c<=50){
         printf("tres chaud");
         }
    else{
      printf("wow");
    }

    return 0;
}
