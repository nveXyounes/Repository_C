#include <iostream>
 using namespace std;
 /*
manzakinawa.exe
1 - Priorite
2 - Pluralite
3 - Assosiativite
friend-binaire(+ , - ....) - membre-affectation(+= , -= ...) - methode-comparaison...incrementation(== , >= , ++ , << , >> ....) 
*/

  class point{
       int x,y;
    public:
       point(int x = 0, int y = 0):x(x),y(y){;}

       void affichage(){ cout << x << " , " << y <<endl; }

       point operator+(point p1, point p2){ 
        return point (p1.x + p2.x, p1.y + p2.y); 
      }
  };

   int main(){
    point p1(4,6),p2(5,3),p3;
    int x = 9;

    p3 = p1 + x;
    p3 = x + p1;
    p3.affichage();
   
    return 0;
   }