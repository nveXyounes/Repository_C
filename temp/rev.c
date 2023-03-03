#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

typedef struct{
 int j,m,a;
}date;

typedef struct{
  char *nom,*prenom;
  float note[10];
  int num;
  date dt;
}eleve;
void remplir(eleve **p,int *n){
    int i;
    printf("saisir le nombre des eleves :");
    scanf("%d",n);
    *p=malloc(*n*sizeof(eleve));
    for(i=0;i<*n;i++){
       (*p+i)->nom=malloc(20*sizeof(char));
       printf("saisir le nom de l eleve \n:");
       scanf("%s",(*p+i)->nom);
       (*p+i)->prenom=malloc(20*sizeof(char));
       printf("saisir le prenom de l eleve \n:");
       scanf("%s",(*p+i)->prenom);
       printf("saisir la note de l eleve \n:");
       scanf("%f",&(*p+i)->note[i]);
       printf("saisir le numero \n:");
       scanf("%d",&(*p+i)->num);
       printf("saisir la date de naissance :\n");
       scanf("%d",&(*p+i)->dt.j);
       scanf("%d",&(*p+i)->dt.m);
       scanf("%d",&(*p+i)->dt.a);
    }
}
void affichage(eleve *p,int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nle nom : %s \n",(p+i)->nom);
        printf("le prenom : %s\n",(p+i)->prenom);
        printf("la note : %.2f\n",(p+i)->note[i]);
        printf("le numero : %d\n",(p+i)->num);
        printf("la date de naissance : %d/%d/%d\n",(p+i)->dt.j,(p+i)->dt.m,(p+i)->dt.a);
    }
}
void ajout(eleve **p , int *n){
 int i;
 *n=*n+1;
 i=*n-1;
       *p=realloc(*p,*n*sizeof(eleve));
       (*p+i)->nom=malloc(20*sizeof(char));
       printf("saisir le nom de l eleve \n:");
       scanf("%s",(*p+i)->nom);
       (*p+i)->prenom=malloc(20*sizeof(char));
       printf("saisir le prenom de l eleve \n:");
       scanf("%s",(*p+i)->prenom);
       printf("saisir la note de l eleve \n:");
       scanf("%f",&(*p+i)->note[i]);
       printf("saisir le numero \n:");
       scanf("%d",&(*p+i)->num);
       printf("saisir la date de naissance :\n");
       scanf("%d",&(*p+i)->dt.j);
       scanf("%d",&(*p+i)->dt.m);
       scanf("%d",&(*p+i)->dt.a);
       
       }

 void suprimer(eleve *p,int *n){
*n=*n-1;
}
int main(){
eleve *T=NULL;
int n,menu;
menu :
printf("+----------------menu          ----------------+\n");
printf("+-----------0 : exit           ----------------+\n");
printf("+-----------1 : reemplir       --------------------+\n");
printf("+-----------2 : affichage      --------------------+\n");
printf("+-----------3 : ajout          ---------------------+\n");
printf("+-----------4 : suprimer       --------------------+\n");
printf(" entrer le choix \n");
scanf("%d" ,& menu);
switch(menu){
case 1: 
       remplir(&T,&n);
       system("cls");
       break;
case 2:
      affichage(T,n);
      system("cls");
      break;
case 3:
      ajout(&T,&n);
      system("cls");
      break;
case 4:
    suprimer(T,&n);
    system("cls");
    break;
case 0:
    exit(0);
    break;
default : printf("\t ERREUR DE CHOIX !!!!\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\n");
}
goto menu;
return 0;
}