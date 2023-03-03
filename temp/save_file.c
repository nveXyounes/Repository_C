#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float T[20],V;
	int i,n;
	FILE *F;
	/*
	printf("Entrez la taille : ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
		scanf("%f",&T[i]);
	
	
	
	F=fopen("NNumber.txt","wb");
	fwrite(T,sizeof(float),n,F);
	fclose(F);
	*/
	
	F=fopen("NNumber.txt","rb");
	fseek(F,0,2);
	n=ftell(F)/sizeof(float);
	rewind(F);
	fread(T,sizeof(float),n,F);
	
	
	for(i=0;i<n;i++)
	   printf("%.2f\n",T[i]);
/*
	fread(&V,sizeof(float),1,F);
	printf("\n\t- la valeur est : %.3f\n\n",V);

	fseek(F,-2*sizeof(float),2);
	
	fread(&V,sizeof(float),1,F);
	printf("\n\t- la valeur est : %.3f\n\n",V);

	rewind(F);
	fread(&V,sizeof(float),1,F);
	printf("\n\t- la valeur est : %.3f\n\n",V);
	*/
	fclose(F);
	
	return 0;
}



