#include <iostream>

 using std::cout;
 using std::cin;
 using std::endl;
 /*
 using namespace std;
 */ 

  int main(){
     
     int a, b;
     float c;

       cout<<"entrez deux valeurs : ";
       cin>>a>>b;

       cout<<"la valeur a : "<<a<<endl<<"la valeur b : "<<b<<endl;

       c = (float)a / b;
       cout<<"la division de "<<a<<" / "<<b<<" est "<<c<<endl;


    return 0;
  }