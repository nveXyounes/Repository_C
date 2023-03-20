#include <iostream>
#include <iomanip>

 using namespace std;
   
  class produit{

    int ref,red;
    string titre;
    float prix;
      
    double calculeprix()
     {
      return prix*(1-(double)red/100);
    }

    public:
    void create()
     {
      cout<<"enter les informations "<<endl;
      cin>>ref>>red>>titre>>prix;
    }

     void show(){
        
     }
   };
        void produit::show()
     {
      cout<<ref<<" - "<<red<<" - "<<titre<" - "<<prix<<" DHS vendu a "<<calculeprix()<<" DHS "<<endl;
    }


  int main(){
     
  produit p1,p2;

  p1.create();
  p1.show();
  p2.show();

/*
notion orienté objet
expression instance, classe, les attributs
Encapsulation
Public-Private-Protected
*/
    return 0;
  }