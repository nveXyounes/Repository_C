#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,x=1;
    printf("Saisie :\n");
    scanf("%s",s);
    
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
       if(s[i]!=s[j])
       {
         x=0;
         break;
       }
    }
    if(x==1) {
    printf("%s est palindrome.\n",s);
    }
    else{ 
        printf("%s n'est pas palindrome.\n",s);
    }
    return 0;
}