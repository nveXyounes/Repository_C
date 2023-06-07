#include <iostream>
#include <iomanip>
 using namespace std;
 
    class date {
     private : 
      int j,m,a;
     public :
       void set_remplir(){
              int jj,mm,aa;

        cout << "Saisie la jour : "<<"\n";  cin >> jj;
        cout << "Saisie la mois : "<<"\n";  cin >> mm;
        cout << "Saisie l'année : "<<"\n";  cin >> aa;
      }
// Constructeur par defaut
       date(){ 
          j = 1;
          m = 1;
          a = 2000;
        }
// Constructeur par argument
       date(int x, int y, int z){
          j = x;
          m = y;
          a = z;
      }
// Constructeur par recopie
// affichage
   
     void aff(){
     string T[12]={"janvier","fevrier","mars","april","mai","juin","juiet","out","septembre","october","november","december"};
   
       cout<<setw(2)<<j<<":"<<setw(2)<<T[m-1]<<":"<<setw(2)<<a<<endl;
      
      }
    };

  int main(){
    
    date A,B(1,3,2000);
  
    A.set_remplir();
    A.aff();
    B.aff();

    


 return 0;
  };
