#include <stdlib.h>
#include <stdio.h>


float moyenne(float a,float b){
    float X;

    return X=(a+b)/2;
}

   int main(){

    float a,b;

    printf("saisie deux valuers \n");
    printf("-->"); scanf("%f",&a);
    printf("-->"); scanf("%f",&b);

    printf("La moyenne de %f + %f est %f",a,b,moyenne(a,b));

    return 0;
   }