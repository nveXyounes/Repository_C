#include <iostream>
   
 typedef struct Node{
    int Nb;
    struct Node *g;
    struct Node *d;
 }Node;
  
 Node* Cree_node(int N){
    Node *nv;
    nv = new Node;
    nv->nb = n;
    nv->g = nv->d = NULL;
     return nv; 
 }

  void Add_to_arbre(Node **Racine, int N){
    if(*Racine == NULL){
       *Racine = Cree_node(N);}
    else{
       if(N > (*Racine)->Nb){
        Add_to_arbre(&(*Racine)->d, N); }
    else{
        Add_to_arbre(&(*Racine)->g, N);
       } 
    }  
  }
   int main(){

    return 0;
   }