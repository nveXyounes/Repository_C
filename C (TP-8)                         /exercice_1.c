#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int j,m,a;
}date;

typedef struct {
  int ISBN;
  char *titre;
  char *auteur;
  char *editeur;
  float prix;
  date dt;
}bouquin;


void remplir(bouquin T[],int *n){
    int i;
    printf("saisie la taille : ");
    scanf("%d",n);
  for(i=0;i<*n;i++){
    printf("saisie le numero de serie : ");
    scanf("%d",&(T+i)->ISBN);
    (T+i)->titre=malloc(20);
    printf("saisie le titre : ");
    scanf("%s",(T+i)->titre);
    (T+i)->auteur=malloc(20);
    printf("saisie le nom de l'auteur : ");
    scanf("%s",(T+i)->auteur);
    (T+i)->editeur=malloc(20);
    printf("saisie le nom de l'editeur : ");
    scanf("%s",(T+i)->editeur);
    printf("saisie le prix : ");
    scanf("%f",&(T+i)->prix);
    printf("saisie la date \n");
    printf("Jour : ");
    scanf("%d",&(T+i)->dt.j);
    printf("mois : ");
    scanf("%d",&(T+i)->dt.m);
    printf("Annee : ");
    scanf("%d",&(T+i)->dt.a);
    printf("\n");
    printf("--------------------------------------------\n");
 }
  }

 
 void affichage(bouquin T[],int *n){
    int i;
    for(i=0;i<*n;i++){
     printf("Le numero : %d",(T+i)->ISBN);
     printf("\n");
     printf("Le titre %s",(T+i)->titre);
     printf("\n");
     printf("Nom de l'auteur : %s",(T+i)->auteur);
     printf("\n");
     printf("Nom de l'editeur : %s",(T+i)->editeur);
     printf("\n");
     printf("Le prix : %f",(T+i)->prix);
     printf("\n");
     printf("le jour : %d",(T+i)->dt.j);
     printf("\n");
     printf("mois : %d",(T+i)->dt.m);
     printf("\n");
     printf("Annee : %d",(T+i)->dt.a);
     printf("--------------------------------------------\n");
 }
 }
int main (){

  bouquin T[50];
    int n,l,choix;
back:  
do{
    puts("............................................");
    puts("----------------book management--------------");
    puts("------------------1-Remplir-------------------");
    puts("-----------------2-affichage-----------------");
    puts("------------------3-editor------------------");
    puts("------------------4-ajouter------------------");
    puts("----------5-orde croissant (auteur)----------");
    puts("-----------6-orde croissant (prix)-----------");
    puts("............................................");
printf("\n");
    puts("--------------choisi une choix-------------");
        printf("---->");
     scanf("%d",&choix);

    

    switch (choix)
    {
    case 1:
       remplir(T,&n);
 printf("---------appuyer 0 pour return au menu principale--------");
scanf("%d",&l);
if(l == 0){
  system("cls");
  goto back;
}
  break;

   case 2:
       affichage(T,&n);
 printf("---------appuyer 0 pour return au menu principale--------");
scanf("%d",&l);
if(l == 0){
  system("cls");
  goto back;
}
  break;
    }
}while(choix > 1 || choix < 9); 


    remplir(T,&n);
    affichage(T,&n);
    return 0;
}