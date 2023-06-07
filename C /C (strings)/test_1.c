#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 int main(){

   char x[10],z[10],y[10],a,b,n,N;

    printf("Saisie :");
    scanf("%s",x);
    printf("Saisie :");
    scanf("%s",z);
       
       a=strlen(x);
       b=strlen(z);
       n=strcasecmp(x,z);

     strcpy(y,x); 
     strcat(y,"A");
     N=strcat(y,z);

  printf("a = %d",a);
  printf("b = %d",b);
  printf("n = %d",n);
  printf("N = %d",N);


    return 0;
 }