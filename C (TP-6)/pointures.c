#include <stdio.h>
#include <stdlib.h>

    typedef struct
{
int h,my
}Temps;
typedef struct
{
int j;m,aj
Temps tp;
}Date;
typedef struct
char # Matr;
char # jours;
Date dps
}Pointages
int main() {
Pointage *P=NULL, *parc;
char c;
int nig
printf("Etrez la taille : ");
scanf ("®d" ‚&n);
P=malloc(n°sizeof(Pointage));
for (i-0-icn:i++)
{
printf ("In\n");
fflush(stdin);
(P+i)-›Matr=malloc(20*sizeof (char));
printf ("Entrez le matr : "); gets ((P+i)-›Matr);
fflush(stdin);
(P+i) -›jours=malloc(20*sizeof (char));
printf ("Entrez le jours : "); gets((P+i)-›jours);
printf ("Entrez la date (JJ/MM/AAAA) : ");
scanf("%d%c%d%c%d",&(P+i)-›dp.j,&c,&(P+i)->dp.m,&c,&(P+i)-›dp.a);
printf ("Entrez le temps (HH:MM) : ");
scanf("%d%c%d",&(P+i)-›dp.tp.h,&c,&(P+i)-›dp.tp.m);
I
for (parc=P; parc<P+n j parc++)
{
printf("1' employe : '%s \n"‚parc-›Matr);
printf ("Pointage fait pour le : '%s \n"‚parc-›jours); printf("la date et l'heure : '%d/%d/%d - %d:%d In\n"›parc-›dp.j,parc-›dp.m, parc-›dp.a, parc-›dp.tp.h, parc->dp.tp.m );

}

return 0;
}