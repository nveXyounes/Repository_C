#ifndef data_base
#define data_base

   typedef enum
{
    homme,femme
}genre;

   typedef struct
{
    int j,m,a;
 }date;
 
   typedef struct 
{
    char *nom;
    char *nationalite;
    char *address;
    date d;
    genre genre;
 }data;


void creation_recherche(data **,int *);
 #endif