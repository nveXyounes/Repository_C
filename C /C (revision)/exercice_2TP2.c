#include <stdio.h>

int main()
{
    int i, j=0, s, ligne;
  
    printf("Entrez le nombre de lignes: ");
    scanf("%d",&ligne);
  
    for(i=1; i<=ligne; ++i, j=0)
    {
        for(s=1; s<=ligne-i; ++s)
        {
            printf("  ");
        }
        while(j != 2*i-1)
        {
            printf("* ");
            ++j;
        }
        printf("\n");
    }
    
    return 0;
}