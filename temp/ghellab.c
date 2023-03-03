#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	char *RS;
	char *mail;
	char *nom_tel;
}fournisseur;
typedef struct{
	int jj,mm,aa;
}date;
typedef struct{
	int numInv;
	char *nom;
	char *marque;
	date dt;
	fournisseur fr;
	float prix;
}ordi;

int menu(){
	int choix;
	printf("----------------------------------------------\n");
	printf("1- Remplir les information des ordinateurs :\n");
	printf("2- Afficher les information des ordinateurs :\n");
	printf("3- Ajouter un ordinateur :\n");
	printf("4- Rechercher un ordinateur :\n");
	printf("5- Supprimer un ordinateur :\n");
	printf("5- modifier un ordinateur :\n");
	printf("----------------------------------------------\n");
	printf("Entrer votre choix :");
	scanf("%d",&choix);
	return choix;
	}
	
void remplir(int *n,ordi **t){
	int i;
	printf("Entrer le nombre des ordinateurs :\n");
	scanf("%d",n);
    *t=malloc(*n*sizeof(ordi));
	for(i=0;i<*n;i++){
		printf("Entrer le numero d'inventaire :\n");
		scanf("%d",&(*t+i)->numInv);
		(*t+i)->nom=malloc(20*sizeof(char));
        printf("Entrer le nom \n");
		scanf("%s",(*t+i)->nom);
		(*t+i)->marque=malloc(20*sizeof(char));
		printf("Entrer la marque :\n");
		scanf("%s",(*t+i)->marque);
		printf("Entrer la date :\n");
		scanf("%d%d%d",&(*t+i)->dt.jj,&(*t+i)->dt.mm,&(*t+i)->dt.aa);
		printf("Entrer les informations du fournisseur :\n\n");
		(*t+i)->fr.RS=malloc(20*sizeof(char));
		printf("Entrer la raison sociale :\n");
		scanf("%s",(*t+i)->fr.RS);
		(*t+i)->fr.mail=malloc(20*sizeof(char));
		printf("Entrer le mail :\n");
		scanf("%s",(*t+i)->fr.mail);
		(*t+i)->fr.nom_tel=malloc(20*sizeof(char));
		printf("Entrer le nom du tel :\n");
		scanf("%s",(*t+i)->fr.nom_tel);
		printf("Entrer le prix :\n");
		scanf("%f",&(*t+i)->prix);
	}
}

void afficher(int n,ordi *t){
	int i;
	printf("Le nombre des ordinateurs est :%d",n);
	printf("Le numero d'inventaire est :%d\n",(t+i)->numInv);
	printf("Le nom est :%s\n",(t+i)->nom);
	printf("La marque est :%s\n",(t+i)->marque);
	printf("La date est :%d%d%d\n",(t+i)->dt.jj,(t+i)->dt.mm,(t+i)->dt.aa);
	printf("La raison sociale du fournisseur est :%s\n",(t+i)->fr.RS);
	printf("Le mail du fournisseur est :%s\n",(t+i)->fr.mail);
	printf("Le nom du tel du fournisseur est :%s",(t+i)->fr.nom_tel);
	printf("Le prix est :%f\n",(t+i)->prix);
}
void ajouter(int *n,ordi **t){
	int i;
	(*n)++;
	*t=realloc(*t,*n*sizeof(ordi));
	i=*n-1;
		printf("Entrer le numero d'inventaire :\n");
		scanf("%d",&(*t+i)->numInv);
		(*t+i)->nom=malloc(sizeof(char));
		printf("Entrer le nom \n");
		scanf("%s",(*t+i)->nom);
		(*t+i)->marque=malloc(sizeof(char));
		printf("Entrer la marque :\n");
		scanf("%s",(*t+i)->marque);
		printf("Entrer la date :\n");
		scanf("%d%d%d",&(*t+i)->dt.jj,&(*t+i)->dt.mm,&(*t+i)->dt.aa);
		printf("Entrer les informations du fournisseur :\n\n");
		(*t+i)->fr.RS=malloc(sizeof(char));
		printf("Entrer la raison sociale :\n");
		scanf("%s",(*t+i)->fr.RS);
		(*t+i)->fr.mail=malloc(sizeof(char));
		printf("Entrer le mail :\n");
		scanf("%s",(*t+i)->fr.mail);
		(*t+i)->fr.nom_tel=malloc(sizeof(char));
		printf("Entrer le nom du tel :\n");
		scanf("%s",(*t+i)->fr.nom_tel);
		printf("Entrer le prix :\n");
		scanf("%f",&(*t+i)->prix);
}
void rechercher(int n,ordi *t){
	int i,rch;
	printf("Entrer le numero d'inventaire d'ordinateur a rechercher :\n");
	scanf("%d",&rch);
	for(i=0;i<n;i++){
		if((t+i)->numInv==rch){
			printf("le nom d'ordinateur a rechercher est %s",(t+i)->nom);
		}
	}
}
void supprimer(int *n,ordi **t){
	int num,i;
	printf("Entrer le numero d'inventaire d'ordinateur a supprimer :\n");
	scanf("%d",&num);
	*t=malloc(*n*sizeof(ordi));
	for(i=0;i<*n;i++){
		if((*t+i)->numInv==num){
			//(*t+i)=((*t+i)+1);
			free((*t+i));
		}
	}
}
void modifier(int n,ordi *t){
	int nm,i;
    char nmd[10];
	printf("Entrer le numero d'inventaire d'ordinateur a modifier :\n");
	scanf("%d",&nm);
	printf("Entrer le nom modifiee :\n");
	scanf("%c",nmd);
	for(i=0;i<n;i++){
		if((t+i)->numInv==nm){
			strcpy((t+i)->nom,nmd);
		}
	}
}

int main(int argc, char *argv[]) {
	ordi *t=NULL;
	int n;
	menu:
	switch(menu()){
		case 1:
			remplir(&n,&t);break;
		case 2:
			afficher(n,t);break;
		case 3:
			ajouter(&n,&t);break;
		case 4:
			rechercher(n,t);break;
		case 5:
			supprimer(&n,&t);break;
		case 6:
			modifier(n,t);break;
	}
	system("pause");
	system("cls");
	goto menu;
	
	
	
	return 0;
}