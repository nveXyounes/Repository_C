#include <stdlib.h>
#include <stdio.h>
 

int min(int a,int b){
    int min;
     
     if( a < b )
min = a;
       return min;
     }


int max(int a,int b){
    int max;
     
     if(a < b)
max = b;
       return max;
     }



 int main(){

   int a,b;

    printf("saisie deux valuers \n");
    printf("-->"); scanf("%d",&a);
    printf("-->"); scanf("%d",&b);

    printf("le minimum valeur est %d",min(a,b));
    printf("\n");
    printf("le maximum valeur est %d",max(a,b));
   
    return 0;
 }