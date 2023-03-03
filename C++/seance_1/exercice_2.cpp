#include <iostream>

 using namespace std;

  int main(){
     
    float R1, R2, R3, Rser, Rpar;
    

    cout<<"saisie les valeurs"<<endl;
    cin>>R1>>R2>>R3;
     
     Rser = R1 + R2 + R3;
     Rpar = (R1*R2*R3)/(R1*R2+R1*R3+R2*R3);

    cout<<"en serie : "<<Rser<<endl<<"en parallele : "<<Rpar<<endl;
    return 0;
  }