#include <stdlib.h>
#include <stdio.h>

  typedef struct{
    char *titre;
    char *artiste;
    int annee;
}album;
  typedef struct{
    char *titre;
    int duree;
    album AL;
  }chanson;

   int main(){

    int i,x;
    chanson *T;
    
    printf("saisie le nombre d'album : ");
    scanf("%d",&x);

         T = malloc(x * sizeof(chanson));
               if (T == NULL) {
        printf("not allocated.\n");
        exit(0);
    }
    else {

        printf("Allocated.\n");
    }

        for(i=0;i<x;i++){
            printf("saisie le titre de chanson : ");
            scanf("%s",T[i].titre);
        printf("\n");
            printf("saisie la duree : ");
            scanf("%d",&T[i].duree);
        printf("\n");
            printf("saisie le titre de l'album : ");
            scanf("%s",T[i].AL.titre);
        printf("\n");
            printf("saisie le nom de l'artiste : ");
            scanf("%s",T[i].AL.artiste);
        printf("\n");
            printf("saisie l'annee : ");
            scanf("%d",&T[i].AL.annee);
        printf("\n");


        }
     return 0;    
   }