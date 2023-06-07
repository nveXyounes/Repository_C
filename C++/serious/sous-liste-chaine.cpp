#include <iostream>

 using namespace std;
  
  typedef struct{
        int l1_number;
  }L1;

  typedef struct{
        int l2_number;
  }L2;

  typedef struct liste{
             L1 l1;
             L2 l2;
             struct liste *SV;
  }Liste;


        Liste * L1_creation(Liste *deb){
          Liste *nv;
          int rep;
          do{
            nv = new Liste;
            cout << "l1 Nombre : ";
            cin >> nv-> l1.l1_number;
            cout << "l2 Nombre : ";
            cin >> nv-> l2.l2_number;

            nv -> SV = deb;
            deb = nv;

            cout << "repetez la saisie ? (si oui 1, si non 0): ";
            cin >> rep;

           }while(rep);

            return deb;
            
        }

        void affichage(Liste *deb){
            Liste * prc = deb;

            while (prc)
            {
                cout << "L1_Number : " << prc-> l1.l1_number;
                cout <<"\n";

                cout << "L2_Number : " << prc-> l2.l2_number;
                cout <<"\n";

                prc = prc -> SV;
            }
            
        }
       
        

        
 

  int main(){

   Liste *deb = NULL;

   deb = L1_creation(deb);
   affichage(deb);

  	return 0;
  }