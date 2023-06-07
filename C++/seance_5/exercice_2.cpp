#include <iostream>

 using namespace std;


 class compte_B{

    private:

     string code;
     float solde;


    public:

    void create(){
        cout<<"Saisie le code : ";
        cin>>code;
        cout<<"Saisie le solde : ";
        cin>>solde;
    }
    void consulter( ){

        cout<<"| Le code : "<<code<<"|"<<endl;
        cout<<"| Le solde : "<<solde<<"|"<<endl;

    }
    void retirer(double S){

        cout<<"Entrer une somme pour retirer : "; cin>>S;
         if(solde > S){

             solde = solde - S;
        }else{
         cout<<"You don't have enough money"<<endl;
        }
    }
    void deposer(double S){

       cout<<"Entrer une somme pour deposer : "; cin>>S;

        solde = S + solde;

    }
 };



  int main(){

   compte_B X;
   int l,choix;
   float S;
back:
 cout<<"+----------------------------+"<<endl;
 cout<<"+-----------Bank-------------+"<<endl;
 cout<<"+---------1-Create-----------+"<<endl;
 cout<<"+---------2-Affiche----------+"<<endl;
 cout<<"+---------3-Retirer----------+"<<endl;
 cout<<"+---------4-Deposer----------+"<<endl;
 cout<<"+---------5-Quit-------------+"<<endl;
 cout<<"+----------------------------+"<<endl;


 cout<<"saisie une choix : "; cin>>choix;

 switch(choix){
    case 1:
   X.create();
  cout<<"write 0 to return  to the main menu : "; cin>>l;
     if (l == 0){
        system("cls");
        goto back;
     }


    case 2:
   X.consulter();
  cout<<"write 0 to return  to the main menu : "; cin>>l;
     if (l == 0){
        system("cls");
        goto back;
     }


    case 3:
   X.retirer(S);
  cout<<"write 0 to return  to the main menu : "; cin>>l;
     if (l == 0){
        system("cls");
        goto back;
     }

    case 4:
   X.deposer(S);
  cout<<"write 0 to return  to the main menu : "; cin>>l;
     if (l == 0){
        system("cls");
        goto back;
     }

    case 5:
        return 0;
}
}
