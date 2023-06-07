#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char nom[10],prenom[10];
    int classe;
    float note[3];
  }etudiant;

typedef enum {
    note_fr;
    note_eng;
    note_math;
}note;

int main()
{ 

    int i;
    etudiant x;
    puts("saisie votre nom et aprés saisie votre prenom");
     scanf("%s",x.nom);
      scanf("%s",x.prenom);





    return  0;
}