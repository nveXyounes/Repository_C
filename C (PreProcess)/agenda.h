#ifndef agenda
#define agenda

typedef struct {
    int j,m,a;
}date;


typedef struct 
{
    char *nom;
    char *num_tele;
    char *indi;
    date d;
}TL;


void creation(TL *,int *)
void ajoute(TL *,int *)
void affichage(TL *,int *)
void update_num(TL *,int *)
void supprimer(TL *,int *)


#endif