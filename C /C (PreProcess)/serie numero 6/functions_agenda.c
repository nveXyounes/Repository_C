#include "agenda.h"
#include <stdio.h>
#include <stdlib.h>

void creation(TL *T,int *n){
      int i;
      printf("saisie la taille : ");
      scanf("%d",n);

    T = malloc(n*sizeof(TL));

      for(i=0;i<*n;i++){
    (T+i)->nom=malloc(10);
      printf("saisie le nom : ");
      scanf("%s",(T+i)->nom);
    (T+i)->indi=malloc(5);
      printf("saisie l'indiquation : ");
      scanf("%s",(T+i)->indi);
    (T+i)->num_tele=malloc(20);
      printf("saisie le numero de telephone : ");
      scanf("%s",(T+i)->num_tele);
      printf("saisie la date ");
      printf("jour : ");
      scanf("%d",&(T+i)->d.j);
      printf("mois : ");
      scanf("%d",&(T+i)->d.m);
      printf("annee : ");
      scanf("%d",&(T+i)->d.a);
      }
}
void ajoute(TL *T,int *n){
  int i=0;
  while(i==n){
    i++;
  }
   (T+i)->nom=malloc(10);
      printf("saisie le nom : ");
      scanf("%s",(T+*n)->nom);
    (T+*n)->indi=malloc(5);
      printf("saisie l'indiquation : ");
      scanf("%s",(T+*n)->indi);
    (T+*n)->num_tele=malloc(20);
      printf("saisie le numero de telephone : ");
      scanf("%s",(T+*n)->num_tele);
      printf("saisie la date ");
      printf("jour : ");
      scanf("%d",&(T+*n)->d.j);
      printf("mois : ");
      scanf("%d",&(T+*n)->d.m);
      printf("annee : ");
      scanf("%d",&(T+*n)->d.a);
}
void affichage(TL *T,int *n){
    int i;
    for(i=0;i<*n;i++){
        printf("le nom : %s",(T+i)->nom);
        printf("le numero de telephone : (%s) %s",(T+i)->indi,(T+i)->num_tele);
        printf("la date : %d/%d/%d",(T+i)->d.j,(T+i)->d.m,(T+i)->d.a);  
    }
}



int main (){
    return 0;
}