#include <stdlib.h>
#include <stdio.h>
#include <string.h>

    int main(){

      int X,A[50],n,i;
      int *P1,temp;
       printf("saisie la taille du tableau : ");
       scanf("%d",&n);
       printf("saisie la valeur de X : ");
       scanf("%d",&X);
       P1=&X;
         for(i=0;i<n;i++){
            printf("saisie l'element %d : ",i+1);
            scanf("%d",&A[i]);
         }
         for(i=0;i<n;i++){
            if(*P1==A[i]){
                A[i]='\0';
                temp=A[i];
                A[i]=A[i-1];
                A[i-1]=temp;
            }
         }
         for(i=0;i<n;i++){
            printf(" %d \t ",A[i]);
                  }



       


        return 0;
    }