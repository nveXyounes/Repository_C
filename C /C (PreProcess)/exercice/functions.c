//
//  functions.c
//  modu
//
//  Created by Fakher eddine Ajermite on 4/1/2023.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <curses.h>
#include <ctype.h>

int research(indi *t,int n,indi ind){
    int i=0;
    for (;i<n;i++) {
        if((strcmp(ind.nom,(t+i)->nom)) == 0 && ind.gr == (t+i)->gr)
            return i;
    }
    
    return -1;
}
void insert(indi **t,int *n){
    indi ind;
    
    ind.nom = malloc(20);
    ind.nation = malloc(20);
    ind.adress = malloc(20);
    printf("entrez le nom \n");
    scanf("%s",ind.nom);
    printf("entrez nation \n");
    scanf("%s",ind.nation);
    printf("entrez adresse\n");
    scanf("%s",ind.adress);
    printf("entrez le sexe, zero for male, one for female\n");
    scanf("%d",&ind.gr);
    printf("entrez le jour\n");
    scanf("%d",&ind.dt.jj);
    printf("entrez le mois\n");
    scanf("%d",&ind.dt.mm);
    printf("entrez l annee\n");
    scanf("%d",&ind.dt.aa);
    
    if(*n == 0){
        *n = *n + 1;
        *t = malloc(*n*sizeof(indi));
        **t = ind;
        
    }else
        
        
        if (research(*t,*n,ind) != -1){
            printf("this individual exists already\n");
            
        }else{
            *n = *n + 1;
            *t = realloc(*t,*n*sizeof(indi));
            (*(*t + *n - 1)) = ind;
        }
            
        
}
void afficha(indi *t, int n){
    int i=0;
    for(;i<n;i++){
        printf("le nom : %s   \n",(t+i)->nom);
        printf("la nationality : %s   \n",(t+i)->nation);
        printf("l adresse : %s   \n",(t+i)->adress);
        printf("le genre : %d   \n",(t+i)->gr);
        printf("la date : %d %d %d   \n",(t+i)->dt.jj,(t+i)->dt.mm,(t+i)->dt.aa);
        
        
        
        
    }
}
void update(indi *t,int n){
    int s,i = 0,pos = -1;
    char *p;
    p = malloc(20);
    printf("entrez le nom et le sexe d indi pour changer l adresse");
    scanf("%s %d",p,&n);
    for (;i<n;i++) {
        if(strcmp((t+i)->nom,p) == 0 && (t+i)->gr == n){
            pos = i;
            break;
        }
    }
    if(pos >= 0){
        printf("entrer the new adresss");
        scanf("%s %d",(t+pos)->nom,&(t+pos)->gr);
    }
    else
        printf("this indi doesnt exist");
}
