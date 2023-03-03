#include <iostream>

 using namespace std;

bool pair_impair(int n){
    bool x;

 if(n%2 == 0){
    cout<<"le nombre "<<n<<" est pair"<<endl;
    x = true;
 }else{
    cout<<"le nombre "<<n<<" est impair"<<endl;
    x = false;
 }
 return x;
}

  int main(){
     int a;
       cout<<"saisie un valeur : "<<endl;
       cin>>a;
     pair_impair(a);

    return 0;
  }
  
  