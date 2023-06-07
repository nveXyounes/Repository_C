#include <cstdlib>
#include <iostream>

using namespace std;

class employe
{
 
  int num;
  string nom,prenom,tel;    
      public:
           employe(int=0,string="",string="",string="")  ;
           void afficher();
};

employe::employe(int a,string b,string c,string d) :num(a),nom(b),prenom(c),tel(d){;}
void employe::afficher(){
     
     cout<<num<<", "<<nom<<" "<<prenom<<", "<<tel<<endl;
     }


class technicien : public employe
{
      int nbp;
      float spp;
      public:
             technicien(int=0,string="",string="",string="",int=0,float=0)  ;
              void afficher();
};

void technicien::afficher(){
     
    employe::afficher();
       cout<<nbp<<", "<<spp<<endl;
     }

technicien::technicien(int a,string b,string c,string d,int e,float f) :employe(a,b,c,d),nbp(e),spp(f) {;}

int main(int argc, char *argv[])
{
 technicien e(12,"Alaoui","Ahmed","02654584",150,123);
    e.afficher();

    
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
