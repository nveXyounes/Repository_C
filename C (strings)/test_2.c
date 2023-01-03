#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main(){

    char Ver[10],x,y,a,b,c[10];
 back:
    printf("\nSaisie un verbe : ");
    scanf("%s",Ver);
   
    x=strlen(Ver);
    y=x-1;
    if ((Ver[x-1]=='r' && Ver[y-1]=='e'))
    {
      printf("\nUn verbe regulier");
    Ver[x-1]='\0';
      Ver[y-1]='\0';
printf("\n");      
    Ver[x-1]='\0';
      Ver[y-1]='\0'; 
      printf("\n");
      printf(" Je %s",Ver);
printf("\n");
     
      Ver[x-1]='\0';
      Ver[y-1]='\0'; 
      printf("\n");
      printf(" Tu %s",Ver);
printf("\n");

    Ver[x-1]='\0';
      Ver[y-1]='\0'; 
      printf("\n");
      printf(" Il/Elle %s",Ver);
printf("\n");

     Ver[x-1]='\0';
      Ver[y-1]='\0'; 
      printf("\n");
      printf(" Nous  %s",Ver);
printf("\n");

     Ver[x-1]='\0';
      Ver[y-1]='\0';  
      printf("\n");
      printf(" Vous %s",Ver);
printf("\n");

     a=Ver[x-1]='\0';
     b=Ver[y-1]='\0'; 
        strcpy(c,a);
        strcat(c,b);
      printf("\n");
      printf(" Ils/Elles %s",Ver);
printf("\n");

     }else{
      printf("\nn'est pas un verbe regulier");
      printf("\n");
     }


goto back;



  return 0;

 }