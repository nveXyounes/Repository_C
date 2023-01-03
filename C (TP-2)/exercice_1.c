#include <stdlib.h>
#include <stdio.h>
    typedef struct
{
int j,m,a;

} Date;

    typedef struct
{
char nom[20];
char prenom[20];

} Candidat;

    typedef enum
{
Non_payee, payee

} Statuts;

    typedef struct
{
int num ;
float px ;
Date dl ;
Candidat c;
char type_permis[3] ;
Statuts reglee ; //0 (non payée) ou bien 1 (la leçon est payée)
} Lecon;

int main(){
   
   Lecon T[200];
   int n,i,choix,l;
  back: 
   do{
        puts("|...................................................|");
        puts("|---------------Auto-ecole <AMANA>------------------|");
        puts("|-----------------Voici le menu---------------------|");
        puts("|---------------Choisie une choix-------------------|");
        puts("|-------------1-Remplir des données-----------------|");
        puts("|-------------2-Affichage des données---------------|");
        puts("|-------------3-Affichage des statistique-------------|");
        puts("|-------------4-Ajouter une nouvelle lecon---------|");
        puts("|...................................................|");
        printf("\n");
        printf("---->");
     scanf("%d",&choix);

    switch (choix){
       case 1:
        for(i=0;i<2;i++){
            puts("+---------------Remplir des données---------------+");
         puts("Saisie votre nom et prenom");
         printf("Nom : ");  scanf("%s",T[i].c.nom);
         printf("Prenom : ");  scanf("%s",T[i].c.prenom);
         puts("saisie la date");
            printf("jour : "); scanf("%d",&T[i].dl.j);
            printf("mois : "); scanf("%d",&T[i].dl.m);
            printf("année : "); scanf("%d",&T[i].dl.a);
         printf("Saisie le prix initiale : ");
         scanf("%f",&T[i].px);
         printf("Si il est payé entrez 1 si non entrez 0"); 
         scanf("%d",&T[i].reglee);
         printf("Type permis : ");
         scanf("%s",T[i].type_permis);
        }
           printf("--------------------appuyez sur 0 pour revenir au menu principal-------------------- \n");
            scanf("%d", &l);
            if (l == 0)
            {
                system("cls");
                goto back;
            }
            break;
       case 2:
             puts("+-------------2-Affichage des données----------------+");
             for(i=0;i<2;i++){
                printf("N°%d\n",i+1);
         printf("Le nom : %s",T[i].c.nom);
         printf("\n");
         printf("Le prenom : %s",T[i].c.prenom);
         printf("\n");
         printf("Le jour : %d",T[i].dl.j);
         printf("\n");
         printf("Le mois : %d",T[i].dl.m);
         printf("\n");
         printf("L'année : %d",T[i].dl.a);
         printf("\n");
         printf("Le montant : %f",T[i].px);
         printf("\n");
         printf("Type de permis : %s",T[i].type_permis);
         printf("\n");

       }
       printf("--------------------appuyez sur 0 pour revenir au menu principal-------------------- \n");
            scanf("%d", &l);
            if (l == 0)
            {
                system("cls");
                goto back;
            }
            break;
      

    }
   }while (choix < 1 || choix > 5 );
       puts("error code 0x03934");
       puts("Contact your administrator to fix this issue");
       system("cls");
       goto back;
   
    return 0;
}