#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nom[10],prenom[10];
    int fr,algo,ang;
}etudiant;

int main(){
     etudiant *T,*q;
     int n,i;
      printf("saisie le nombre d'etudiant : ");
       scanf("%d",&n);   
        T=malloc(sizeof(etudiant)*n);
        q=malloc(sizeof(etudiant)*n);
    for(i=0;i<n;i++){
        printf("Saisie le nom : ");
        scanf("%s",T[i].nom);
        printf("Saisie le prenom : ");
        scanf("%s",T[i].prenom);
        printf("Saisie la note de francois : ");
        scanf("%d",&T[i].fr);
        printf("Saisie la note de l'algorithme : ");
        scanf("%d",&T[i].algo);
        printf("Saisie la note d'anglais : ");
        scanf("%d",&T[i].ang);
        FILE *F;
        F = fopen("save_etudiant.txt","a");
    }


    if(F){
        for(i=0;i<n;i++){
           printf("\n");
           printf("l'etudiant numero %d est : %s %s",i+1,T[i].nom,T[i].prenom);
           printf("\n");
           printf("Note francois est : %d",T[i].fr); 
           printf("\n");
           printf("Note algorithme est : %d",T[i].algo); 
           printf("\n");
           printf("Note anglais est : %d",T[i].ang); 
           printf("\n");
        }
        fclose(F);
    }
    return 0;
}