#include <stdio.h>
#include <stdlib.h>

    int main(){

       float m,*T,max=0;
       int n,i;
       int c=0;

       printf("Saisie le nombre d'athletes : ");
       scanf("%d",&n);

       T = malloc(n * sizeof(int));

          for(i=0;i<n;i++){
               printf("saisie le record de %d athlete : ",i+1);
               scanf("%f",&T[i]);
               m=m+T[i];
          }
          m=m/n;
                  printf("\n");

          printf("La moyenne de record est : %f",m);
          
          for(i=0;i<n;i++){
            if(T[i]<m){
               c++;
            }
               if(T[0] < T[i]){
                max = T[i];
               }
          }
        printf("\n");
          printf("le nombre d’athlètes pouvant participer à une compétition est : %d",c);
        printf("\n");
          printf("le meilleur record des athlètes de cette course est %f ",max);

        return 0;
    }