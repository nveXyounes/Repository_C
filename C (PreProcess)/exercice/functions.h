//
//  functions.h
//  modu
//
//  Created by Fakher eddine Ajermite on 4/1/2023.
//

#ifndef functions_h
#define functions_h

#include <stdio.h>

typedef struct{
    int jj,mm,aa;
}date;
typedef enum{
    male,female
}
genre;
typedef struct{
    char *nom,*nation,*adress;
    genre gr;
    date dt;
}indi;
void insert(indi **,int *);
void afficha(indi *, int);
void update(indi *,int);
int research(indi *,int,indi);
#endif /* functions_h */
