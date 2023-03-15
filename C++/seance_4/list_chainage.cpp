#include <iostream>
  
  using namespace std;

  typedef struct{
    string nom;
    int note;
  }data;
  
  typedef struct liste{
    struct data;
    struct liste *SV;
  }liste;

   int main(){
  int *debu = NULL;

  liste *NV;
  
/*
   NV = new liste[n];
   NV -> SV = debu;
   debu = NV;
*/

/* algorithm parc
    for(*parc = debu ; *parc != NULL ; *parc =* parc ->* SV){}
*/

/* algorithm FIFO
   
  NV -> SV = NULL; 
    if(debu){
  for(parc = debu ; parc ->! = NULL; parc = parc -> SV);
    parc ->sv = NV;
  }else{
    deb = NV;
  }

  exemple de MIN

  min = deb;
  for(parc = debu ; parc ->!= NULL; parc = parc -> SV);
     if(min -> data.note > parc -> data.note){
        min = parc;
     }

  Pour ajouter dans une certain position

  NV -> SV = POS -> SV
  POS -> SV = NV;    
*/


   


    return 0;
   }