#include <iostream>
#include <iomanip>
     using namespace std;
 class Temps
{
  private:
        int heur,min,sec;
  public:

    void aff(){cout<<setw(2)<<heur<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;}
         Temps(int h=0,int m=0,int s=0){heur=h;min=m;sec=s;}

};



    int main() {
  Temps D,T(4,7,9),R(3),F(T);
   cout<<setfill('0');

D.aff();
T.aff();
R.aff();
F.aff();

cout<<endl;
return 0;
}
