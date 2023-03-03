//
//  main.c
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

int main (int argc, char *argv []){
    indi *t = NULL;
    int choix,n = 0;
    while (1) {
        
        menu :
        
        printf("\n\t+----------------------------------------------------------------------+\n");
        printf("\n\t+ 1 : remplissage                                                      +\n");
        printf("\n\t+ 2 : Afficher                                                         +\n");
        printf("\n\t+ 3 : modifier                                                         +\n");
        printf("\n\t+ 4 : quitter                                                          +\n");
        printf("\n\t+     entrez votre choix                                               +\n");
        printf("\n\t+----------------------------------------------------------------------+\n");
        scanf("%d",&choix);
        switch(choix){
         case 1:
         insert(&t,&n);
         break;
         case 2:
         afficha(t,n);
         break;
         case 3:
         update(t,n);
         break;
         case 4:
         exit(0);
         break;
         default :
         printf(" erreur de choix \a\a\a \n");
         sleep(5);
         goto menu;
         
         
         }
         
         }
         
    }

