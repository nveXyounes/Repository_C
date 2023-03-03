#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	int j,m,a;
}date;
typedef struct{
	char *rs;
	char *mail;
	char *tel;
}fournisseur;
typedef struct{
	int num;
	char *nom;
	char *mark;
	date dt;
	fournisseur fr;
	float prix;
}pc;
void remplir(pc **t,int *n){
    int i;
    printf("saisie la taille\n ");
    scanf("%d",n);
     *t=malloc(*n*sizeof(pc));
     for(i=0;i<*n;i++){
     printf("saisir le numero \n:");
     scanf("%d",&(*t+i)->num);
    (*t+i)->nom=malloc(20*sizeof(char));
      printf("saisie le nom \n");
      scanf("%s",(*t+i)->nom);
      (*t+i)->mark=malloc(20*sizeof(char));
      printf("saisie la marque \n");
      scanf("%s",(*t+i)->mark);
      printf("entrez la date \n");
      scanf("%d",&(*t+i)->dt.j);
      scanf("%d",&(*t+i)->dt.m);
      scanf("%d",&(*t+i)->dt.a);
      (*t+i)->fr.rs=malloc(20*sizeof(char));
      printf("saisie la raison \n");
      scanf("%s",(*t+i)->fr.rs);
      (*t+i)->fr.mail=malloc(20*sizeof(char));
      printf("saisie l'email \n");
      scanf("%s",(*t+i)->fr.mail);
      (*t+i)->fr.tel=malloc(20*sizeof(char));
      printf("saisie le telephone \n");
      scanf("%s",(*t+i)->fr.tel);
      printf("saisie le prix \n");
      scanf("%f",&(*t+i)->prix);
}
}
void affichage(pc *t,int n){
    int i;
    for(i=0;i<n;i++){
      printf("le numero est %d\n",(t+i)->num);
      printf("le nom est %s\n",(t+i)->nom);
      printf("la mark est %s\n",(t+i)->mark);
      printf("la date est %d/%d/%d\n",(t+i)->dt.j,(t+i)->dt.m,(t+i)->dt.a);
      printf("la raison est %s\n",(t+i)->fr.rs);
      printf("l'email est %s\n",(t+i)->fr.mail);
      printf("le telephone est %s\n",(t+i)->fr.tel);
      printf("le prix est %f\n",(t+i)->prix);
}
}
void trie_decroissant(pc *t,int n){
	int i,j;
	pc x;
	for(i=0;i<n;i++){
	for(j=i;j<n;j++){
	if((t+i)->prix<(t+j)->prix){
	x=*(t+i);
	(t+i)=(t+j);
	*(t+j)=x;	
}	
}
}
}
void trie_croissant(pc *t,int n){
	int i,j;
	pc x;
	for(i=0;i<n;i++){
	for(j=i;j<n;j++){
	if((t+i)->prix>(t+j)->prix){
	x=*(t+i);
	(t+i)=(t+j);
	*(t+j)=x;	
}	
}
}
}
void supprimer(pc **t,int *n){
	*n=*n-1;		
	int i;
	char v;
	printf("entrez une mark\n");
	scanf("%d",v);
	for(i=0;i<*n+1;i++){
	if(strmp((*t+i)->mark,v)==0){
	(t+i)=((t+i)+1);
}		
}
}
int main(int argc, char *argv[]) {
	pc *t=NULL;
	int n;
	remplir(&t,&n);
	trie_decroissant(t,n);
   	affichage(t,n);
   	trie_croissant(t,n);
   	affichage(t,n);
   	supprimer(&t,&n);
	return 0;
}