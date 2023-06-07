#include <stdio.h>
#include <stdlib.h>
#include "2_data.h"

// ----functions---- //

void remplir(ordinateur **T,int *n){
     int i;
     printf("saisie la taille du tableau (entre 1 et 100");
     scanf("%d",n);
     for(i=0;i<*n;i++){
        printf("saisie le numero d'inventaire : ");
        scanf("%d",&(*T+i).numInv);
        printf("saisie le nom de generique : ");
        scanf("%s",(*T+i)->nom);
        printf("saisie la marque d'ordinateur : ");
        scanf("%s",(*T+i)->marque);
        printf("saisie la date d'achat : ");
        scanf("%d",&(*T+i).date_ach);
        printf("saisie le prix : ");
        scanf("%d",&(*T+i).prix);
        printf("saisie le raison sociale du fournisseur : ");
        scanf("%s",(*T+i)->FR->RS);
        printf("saisie l'adresse mail du fournisseur : ");
        scanf("%s",(*T+i)->FR->mail);
        printf("saisie le telephone de fournisseur : ");
        scanf("%s",(*T+i)->FR->tel);
        printf("saisie la date jj/mm/aa : ");
        scanf("%d // %d // %d",&(*T+i)->date_ach.jj,&(*T+i)->date_ach.mm,&(*T+i)->date_ach.aa);
     }
}

 int main(){
    

    return 0;
 }