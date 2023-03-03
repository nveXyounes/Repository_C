#include <iostream>

 using namespace std;

  int main(){
     
     int a, b;
     float c, c1;

     cout<<"entrer deux valeurs"<<endl;
     cin>>a>>b;
     c = (float)a/b;
     c1 = (float)(a%b);
     cout<<"le quotient de a/b est : "<<c<<endl<<"le reste est : "<<c1<<endl;

    return 0;
  }