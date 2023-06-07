#include <iostream>
  using namespace std;
// pile = stack = LIFO ; file = queue = FIFO
// enqueue = LILO ; dequeue = FIFO
//Question 1 (facteur gauche)
  int Facteur_gauche(liste *L1, liste *L2){
     liste *p1, *p2;
      for(p1 = L1, p2 = L2; p1 != NULL; p1 = p1 -> sv, p2 = p2 -> sv){
        if(p1 -> data != p2 -> data)
          return 0;
      }
      return 1;
  }

//Question 2 (sous_liste)
  int sous_liste(liste *L1, liste *L2){
    liste  *p2;
      for(p2 = L2; p2 ;p2 = p2 -> sv){
        if(Facteur_gauche(L1 , p2))
          return 1;
      }
    return 0;    
  }

//recherche (liste simplement chainee)
  liste *recherche(liste *L1, int NR){
    liste *parc;
      for(parc = L1; parc ; parc = parc -> sv){
        return parc;
      }else{
        return NULL;
      }
  }

//liste doublement chainee (nombre d'element)
  int nEg, nEd; // nombre element gauche et droit
   liste *parc, *el;
    for(parc = el; nEg = 0; parc ; parc = parc -> prc){
        nEg++;
    }
    for(parc = el; nEd = 0; parc ; parc = parc -> SV){
        nEd++;
    }

//enfilage
  nv -> sv = NULL;
  nv -> pr = T->Fin;
   if(T -> deb  == NULL){
     T -> deb = nv;
   }else
     T -> Fin -> sv = nv;
     T -> Fin = nv;
//desenfilage
T -> Fin = T -> Fin -> pr;
T -> Fin -> sv = NULL;

  int main(){
    return 0;
  }