#include <stdlib.h>
#include <stdio.h>

  typedef struct article
  {
    int pu,qu,id;
    char titre[20];
    float red;

   }article;

int main(){

     int i,n,idr,pos;
     float z=0,x=0;
     article HP[10];

    do{
        puts("saisie le nombre d'articles");
        scanf("%d",&n);
    }while(n<=0 || n>10);

    for(i=0;i<n;i++){
     puts("Saisie le ID");
     scanf("%d",&HP[i].id);

     puts("Saisie le prix unitaire");
     scanf("%d",&HP[i].pu);

     puts("Saisie la quantite");
     scanf("%d",&HP[i].qu);
     
     puts("Saisie la reduction entre 0 et 100");
     scanf("%f",&HP[i].red);

     puts("Saisie le titre");
     scanf("%s",HP[i].titre);

     printf("\n");

    }

    for(i=0;i<n;i++){
     x=(HP[i].pu*HP[i].red)/100;
     z=HP[i].pu-x;
printf("\n");

    printf("Le prix pour %s est : %f",HP[i].titre,z);
    printf("\n");
    printf("Quantite est %d",HP[i].qu);
    }
    printf("\n");

   puts("Saisie un ID pour le rechercher");
   scanf("%d",&idr);
       printf("\n");

for(i=0,pos=-1;i<n && pos==-1;i++){
      if(HP[i].id==idr)
         pos=i;
}
x=0;z=0;
    printf("L'ID est : %d",HP[pos].id);           printf("\n");
    printf("Le prix unitaire : %d",HP[pos].pu);   printf("\n");
    printf("La quantite est : %d",HP[pos].qu);    printf("\n");
    printf("Le titre est : %s",HP[pos].titre);    printf("\n");
    x=(HP[pos].pu*HP[pos].red)/100;
    z=HP[pos].pu-x;
    printf("Le prix apres la reduction est : %f",z);printf("\n");

 


    return 0;
}