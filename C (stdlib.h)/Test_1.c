#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {

char sus[200],x,c;
int i;
puts("Saisie un TXT");
 gets(sus);
   x=strlen(sus);
 puts("entrer un caractere");
c=getchar();
for(i=0 ; i<x ; i++){
   if(sus[i]=='e'){
   sus[i]=c;
}
}
  puts(sus);
    return 0;

}