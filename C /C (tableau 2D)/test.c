#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int T[5]={3,4,5,6,7},T1[2]={5,9},i,j,s=0;
    
    for (i=0; i<5; i++) {
        for (j=0; j<2; j++) {
            s=T[i]*T1[j]+s;
        }
    }
    printf("%d",s);
    printf("\n");
    return 0;
}

