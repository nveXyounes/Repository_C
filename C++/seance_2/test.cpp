#include <iostream>
   
   using namespace std;

 typedef struct
 {
    char *nom, *prenom, *CIN, *email;
    int numero;
    
 }Bank;

 typedef struct liste 
 {
    Bank data;
    struct liste *next;
 }Liste;

 void AFF(Liste *B){
    Liste* parc;
    for(parc=B;parc!=NULL;parc=parc->next)
     cout<<"x = "<<
 }

 Liste* CR_LIFO (Liste *B)
 {
    Liste *New;
    int rep;
    do
    {
        New = new Liste;

        cout<<"entrer les donnees : "<<endl;
        cin>>New->data.x>>New->data.y;

        New->next = B;
        B = New;

        cout<<"write 1 to continue, or 0 to end the program"<<endl;
        cin>>rep;
    } while (rep);
      return 0;
    
 }

  int main(){
  Liste *begin=NULL;
  begin* CR_LIFO(begin);
    
    return 0;
  }