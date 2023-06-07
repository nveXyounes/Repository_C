#include <stdio.h>
#include <stdlib.h>
#include "base.h"

void creation_recherche(data **T,int *n){
   int i,ind;
   printf("saisie le nombre d'individue : ");
   scanf("%d",n);
for(i=0;i<*n;i++){
    (*T+i)=malloc(sizeof(char));
    printf("saisie le nom : ");
    scanf("%s",(*T+i)->nom);
    printf("saisie la nationalite : ");
    scanf("%s",(*T+i)->nationalite);
    printf("saisie l'address : ");
    scanf("%s",(*T+i)->address);
    printf("saisie la date");
    printf("jour : ");
    scanf("%d",&(*T+i)->d.j);
    printf("mois : ");
    scanf("%d",&(*T+i)->d.m);
    printf("annee : ");
    scanf("%d",&(*T+i)->d.a);
}
if(*n==0){
    *n=*n+1;
    *T=malloc()
}

}
   
int main(){

    return 0;
}

