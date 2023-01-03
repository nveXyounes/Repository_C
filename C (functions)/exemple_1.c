#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num;
    char *nom;
    float note; 
}etd;

typedef struct 
{
    int num_tmp;
    char *nom_tmp;
    float note_tmp;
}etd_tmp;


void remplir(etd T[],int n){
     int i;
   for(i=0;i<n;i++){
    printf("saisie le num : ");
    scanf("%d",T[i].num);
    printf("saisie le nom : ");
    scanf("%s",T[i].nom);
    printf("Saisie la note : ");
    scanf("%f",T[i].note);
    printf("\n");
   }
}

void affichage(etd T[],int n){
    int i;
   for(i=0;i<n;i++){
    printf("L'etudient num %d est %s",T[i].num,&T[i].nom);
    printf("\n");
    printf("La note est %f",T[i].note);
    printf("\n");
   }
}
void ajoute(etd_tmp T[],int n){
     int j;
    printf("saisie le num : ");
    scanf("%d",T[j].num_tmp);
    printf("saisie le nom : ");
    scanf("%s",T[j].nom_tmp);
    printf("Saisie la note : ");
    scanf("%f",T[j].note_tmp);

    for(i=0;i<n;i++){
    
    }
}

void recherche(etd T[],int n){

}

int main(){


     int T[30],n;

    return 0;
}