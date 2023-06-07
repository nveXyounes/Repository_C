#include <iostream>
  using namespace std;
   
   typedef struct node
   {
    int Nombre;
    struct node *left;
    struct node *right;
   }node;
   

   node * CreateNode (int ab)
   {
	  node * nouv;
	  nouv=(node*)malloc(sizeof(node));
	  nouv->Nombre=ab;
	  nouv->left=NULL;
	  nouv->right=NULL;
	   return nouv;
   }

   int nbrNodes(node * Arbre) 
   {
  
	if(t==NULL) 
		return 0; 
	else 
		return( 1 + 	nbrNodes(Arbre->left)+ 
				nbrNodes(Arbre->right)); 
  }
  
   node* searchNode (node * Arbre,int ab) 
{
	if(Arbre==NULL)
		return NULL;
	else
		if(ab == Arbre->Nombre)
			return(Arbre);
		else
			if(ab < Arbre->Nombre)
				return(searchNode (Arbre->left,ab));
			else
				return(searchNode (Arbre->right,ab));
}

  int main(){
     node *Arbre = NULL;
     Arbre = CreateNode(Arbre);
     nbrNodes(Arbre);
     searchNode(Arbre,3);

  }