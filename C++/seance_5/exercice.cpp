#include <iostream>

 using namespace std;
   
  class voiture{

  private:
    string matricule;
    int poids;

  public:
    void create(){
        cout<<"saisie le matricule : ";
        cin>>matricule; 
        cout<<"saisie le poids : ";
        cin>>poids;
    }
    void modify_matricule(string nv_m){

        cout<<"saisie une nouvelle matricule : "; 
        cin>>nv_m;

        matricule = nv_m;
    }
    void modify_poids(int nv_p){

        cout<<"saisie une nouvelle poids : "; 
        cin>>nv_p;

        poids = nv_p;
    } 
    void show();

  };
 
 void voiture::show(){

    cout<<"le matricule : "<<matricule<<endl;
    cout<<"le poids : "<<poids<<"Kg"<<endl;
 }

  int main(){

   voiture V;
   int l,choix,x;
   string X;
back:
 cout<<"+-------------------------+"<<endl;
 cout<<"+---------Voiture---------+"<<endl;
 cout<<"+---------1-Create--------+"<<endl;
 cout<<"+---------2-Modify--------+"<<endl;
 cout<<"+---------3-Show----------+"<<endl;
 cout<<"+---------4-Quit----------+"<<endl;

cout<<"saisie une choix : "; cin>>choix;

 switch(choix){
    case 1:
   V.create();
  cout<<"write 0 to return  to the main menu : "; cin>>l;
     if (l == 0){
        system("cls");
        goto back;
     }
 

    case 2:
   V.modify_matricule(X);
   V.modify_poids(x);
  cout<<"write 0 to return  to the main menu : "; cin>>l;
     if (l == 0){
        system("cls");
        goto back;
     }
 

     case 3:
   V.show();
  cout<<"write 0 to return  to the main menu : "; cin>>l;
     if (l == 0){
        system("cls");
        goto back;
     }
 
 
    case 4:
        return 0;

}

}
    