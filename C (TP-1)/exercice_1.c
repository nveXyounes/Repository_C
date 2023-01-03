#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){

  char x[100],z[100];
  int i,c,e,j=0;

  puts("Saisie une phrase : ");     
  gets(x);
  puts(x);
 e=strlen(x);

 for ( i = 0; i <= e; i++)
 {
    if (!isspace(x[i]) && x[i]!='\0')
    {
        z[j]=x[i];
        j++;
    }else{
        
        z[j]='\0';
        printf("mot : %s\n",z);
        j=0;
        

    }
   }
    return 0;
}
