#ifndef data_base
#define data_base

// ----structures---- //

  typedef struct 
{
    char *RS;
    char *mail;
    char *tel;
}fournisseur;

  typedef struct{
    int jj,mm,aa;
}Date;

typedef struct {
    int  numInv;
    char *nom;
    char *marque;
    Date date_ach;
    fournisseur FR;
    float prix;
}ordinateur;

// ----functions---- //

void remplir(ordinateur **T,int *n)
 

#endif