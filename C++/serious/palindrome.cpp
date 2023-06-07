#include <iostream>
 using namespace std;
 
 typedef struct liste{
    string lettre;
    struct liste *sv, *pr;
 }liste;

 typedef struct {
   liste *deb, *fin;
 }head;

  void cr_pile(head *h, string c){
    liste *nv;
    nv = new liste;
         nv -> lettre = c;
         nv -> sv = h -> deb;
         nv -> pr = NULL;
    if(!h -> deb)
         h -> fin = nv;
   else 
         h -> deb -> pr = nv;
         h -> deb = nv;
  }
  void cr_file(head *h, string c){
   liste *nv;
   nv = new liste;
        nv -> lettre = c;
        nv -> pr = h -> fin;
        nv -> sv = NULL;
   if(!h -> fin)
        h -> deb = nv;
   else
        h -> fin = nv;
  }

  bool palindrom(head h, head h1){
   liste *parcp, *parcf;
          parcf = h1.deb;
          bool found = true;
      for (parcp = h.deb ; parcp && found ; parcp = parcp -> sv, parcf = parcf -> sv){
          if(parcp -> lettre! = parcf -> lettre)
             found = false;
      }
      return found;
  }

 int main(){
     head hp, hf;
     string c;
     hp.deb = hp.fin = NULL;

     do{
        cout << "entrez svp un caractere : "; cin >> c;
        if (c! = "."){
          cr_pile(&hp, c);
          cr_file(&hf, c);
        }
     }while(c! = ".");

     if ( palindrom (hp, hf))
       cout << "le mot est un palindrome ";
     else
       cout << "le mot n'est pas d'un palindrome ";
    return 0;
 }