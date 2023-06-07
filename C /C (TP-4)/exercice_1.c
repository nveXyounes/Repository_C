#include <stdlib.h>
#include <stdio.h>
  
  int main(){

       int *ptr,*i;
       int n;

      printf("Entrer le nombre des elements : ");
      scanf("%d",&n);

          ptr = malloc(n * sizeof(int));

          if (ptr == NULL) {
        printf("not allocated.\n");
        exit(0);
    }
    else {

        printf("Allocated.\n");
    }

       for( i=ptr ; i<ptr+n ; i++){
        printf("Saisie un element : ");
        scanf("%d",ptr);
       }

        for( i=ptr ; i<ptr+n ; i++) {
            printf("| %d |", *ptr);
        }
    
    free(ptr);
        
        printf("| %d |", *ptr);


       
    return 0;
}