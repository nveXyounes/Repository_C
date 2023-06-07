#include <iostream>
#include <iomanip>

 using namespace std;

  int main(){
    int a,b,c;
     cout<<"saisie les valeur : ";
     cin>>a>>b>>c;
      
     cout<<"+-------------------------------------------------+"<<endl;
     cout<<"+      DEC      |     Octal     |      Hexa       +"<<endl;
     cout<<"+"<<setw(9)<<a<<setw(7)<<"|"<<setw(8)<<setbase(8)<<a<<setw(8)<<"|"<<setw(8)<<setbase(16)<<a<<setw(11)<<"+"<<endl;
     cout<<"+"<<setw(9)<<b<<setw(7)<<"|"<<setw(8)<<setbase(8)<<b<<setw(8)<<"|"<<setw(8)<<setbase(16)<<b<<setw(11)<<"+"<<endl;
     cout<<"+"<<setw(9)<<c<<setw(7)<<"|"<<setw(8)<<setbase(8)<<c<<setw(8)<<"|"<<setw(8)<<setbase(16)<<c<<setw(11)<<"+"<<endl;
     cout<<"+-------------------------------------------------+"<<endl;

    return 0;
  }