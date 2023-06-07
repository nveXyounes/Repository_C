#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main(){

  int i;
  char verb[20];
  char pp[6][5]={"je","tu","il","nous","vous","ils"};
  char ter[6][4]={"e","es","e","ons","ez","ent"};
back:
    printf("entrez un verbe : "); 
    scanf("%s",verb);

      verb[strlen(verb)-2]='\0';

      for(i=0;i<6;i++) 
        printf("%s %s%s\n",pp[i],verb,ter[i]);

        goto back;
    return 0;
 }