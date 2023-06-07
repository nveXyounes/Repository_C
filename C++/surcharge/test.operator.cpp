#include <iostream>
 using namespace std;
  
  class complex{
    public:
        int re;
        int img;
    public:
    complex(int RE, int IMG):re(RE),img(IMG){;}

    void affichage(){ cout << re << " + " << img << "i" << endl; }

    complex operator+(complex p1, complex p2) {
    return complex(p1.re + p2.re, p1.img + p2.img);
  }
    complex operator*(complex p1, complex p2) {
    return complex(p1.re * p2.re - p1.img * p2.img,
                   p1.re * p2.img + p1.img * p2.re);
  }
    complex operator-=(complex p1, complex p2) {
    return complex(p1.re -= p2.re,
                   p1.img -= p2.img);
  }
};


 int main(){
    
  complex num1(3, 4);
  complex num2(1, 2);

  cout << "Premier nombre complex: ";
  num1.affichage();
  cout << "Deuxieme nombre complex: ";
  num2.affichage();

  complex somme = num1 + num2;
  cout << "La somme : ";
  somme.affichage();

  complex produit = num1 * num2;
  cout << "Le produit : ";
  produit.affichage();

  complex soustraction num1 -= num2;
  cout << "La soustraction : ";
  soustraction.affichage();
   
    return 0;
 }