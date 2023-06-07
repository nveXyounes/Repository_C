#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
   int x,i,j,NL,NC;
   int tableau[100][100] = {0}; 
 printf("saisie le nombre des lignes : ");
 scanf("%d",&NL);
  printf("\n");

 printf("saisie le nombre des colonnes : ");
 scanf("%d",&NC);
 printf("\n");
    for(i=0;i<NL;i++)
    {
     for(j=0;j<NC;j++)
    {
         printf("saisie : ");
         scanf("%d", &x);
              tableau[i][j] = x ;
    }
    }
    printf(" Le tableau  = \n");
  for(i=0; i < NL; i++)
  {
    for(j = 0; j < NC; j++)
    {
      printf("%3d",tableau[i][j]);
    }
    printf("\n");
  }
  
 
  return 0;
}