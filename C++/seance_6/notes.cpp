#include <iostream>

 using namespace std;
  
  typdedef struct{
             string nom;
             string adresse;
             int prix,n_nuits,phone;    
  }hotel;

  typedef struct liste{
             struct hotel;
             struct liste *SV;
  }liste;


        void creation(hotel h, int n){
          cout << "Le nom : ";
          cin >> h->nom;

          cout << "L'adresse : ";
          cin >> h->adresse;

          cout << "Le prix";
          cin >> h->prix;

          cout << "Le nombre de nuits : ";
          cin >> h.n_nuits;

          cout << "Phone number : ";
          cin >> h.phone;
        }

        
 

  int main(){

   int *debu = NULL, n;

   liste *NV;

    NV = new liste[n];
    NV -> SV = debu;
    debu = NV;
  	return 0;
  }