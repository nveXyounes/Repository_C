  #include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Younes farhat     
  #
typedef struct {
    char *nom;
    char *pays;
}equipe;

typedef struct 
{
  int num;
  equipe E;
  float rec;
}athlete;


void remplir(athlete T[],int *n){
    int i,max=0,min=0;
    float x=0,m=0,c=0;
    printf("saisie la taille : ");
    scanf("%d",n);
    for(i=0;i<*n;i++){
        printf("saisie le num : ");
        scanf("%d",&(T+i)->num);
        (T+i)->E.nom=malloc(20);
        printf("saisie le nom : ");
        scanf("%s",(T+i)->E.nom);
        (T+i)->E.pays=malloc(20);
        printf("saisie le pays : ");
        scanf("%s",(T+i)->E.pays);
        printf("saisie le record : ");
        scanf("%f",&(T+i)->rec);
        x=x+(T+i)->rec;
        c++;
        min=(T+i)->rec;
          if(min>max){
            max=min;
          }
    }
    printf("----------------------------");
        printf("\n");
    m=x/c;
    printf("Le moyenne est %f",m);
        printf("\n");
     printf("Le max est %d",max);
        printf("\n");   
   
}

void affichage(athlete T[],int *n){
    int i;
    for(i=0;i<*n;i++){
        printf("Le num : %d",(T+i)->num);
        printf("\n");
        printf("le nom : %s",(T+i)->E.nom);
        printf("\n");
        printf("Le pays : %s",(T+i)->E.pays);
        printf("\n");
        printf("le record : %f",(T+i)->rec);
        printf("\n");
        
    }
    printf("----------------------------");
}

void trier(athlete T[],int *n){
    int i,x=0,j;
    int tmp;
    char temp[20];
    for(i=0;i<*n-1;i++){
  x=i;
  for(j=i+1;j<*n-1;j++){
    if ((T+i)->rec > (T+j)->rec){
      x = j;
     }
    if (x != i)

      tmp = (T+i)->num;
      (T+i)->num = (T+x)->num;
      (T+x)->num = tmp;

      strcpy((T+i)->E.nom,temp);
      strcpy((T+x)->E.nom,(T+i)->E.nom);
      strcpy(temp,(T+x)->E.nom);

     
      strcpy((T+i)->E.pays,temp);
      strcpy((T+x)->E.pays,(T+i)->E.pays);
      strcpy(temp,(T+x)->E.pays);

      tmp = (T+i)->rec;
      (T+i)->rec = (T+x)->rec;
      (T+x)->rec = tmp;
    }
  }

printf("----------------------------");
printf("\n");
// affichage
printf("Tableau triée par ordre croissant");
for(i=0;i<*n;i++){
    printf("\n");
        printf("Le num : %d",(T+i)->num);
        printf("\n");
        printf("le nom : %s",(T+i)->E.nom);
        printf("\n");
        printf("Le pays : %s",(T+i)->E.pays);
        printf("\n");
        printf("le record : %f",(T+i)->rec);
        printf("\n");
        
    }
}
int main(){

athlete T[100];

     int n;

     remplir(T,&n);
     affichage(T,&n);
     trier(T,&n);
     
    return 0;
}