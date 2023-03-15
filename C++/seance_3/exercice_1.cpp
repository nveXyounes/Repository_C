#include <iostream>

 using namespace std;

  typedef struct{
    string nom_mat;
    float c1[10],c2[10],coef;
  }notes;
  

  int main(){
     
     int i,n;
     notes *T;
     float x;
   cout<<"saisie le nombre des matiere (0<N<=10) : ";
   cin>>n;
     T = new notes[n];
      for (i = 0;i < n;i++){
        
        cout<<i+1<<"-"<<"Entrez SVP [New Mat] [coef] [Note C1] [Note C2] : ";
        cin>>(T+i)->nom_mat>>(T+i)->coef>>(T+i)->c1>>(T+i)->c2;
        (T+i)->m = ((T+i)->m + (T+i)->c1 + (T+i)->c2)/2;
        (T+i)->mg = (T+i)->m + (T+i)->coef;
      }     
        x = (T+i)->mg/i+1;
 
 for (i = 0;i < n;i++){
        
    cout<<"matiere : "<<(T+i)->nom_mat<<endl<<"coef : "<<(T+i)->coef<<endl<<"note 1 : "<<(T+i)->c1<<endl<<"note 2 : "<<(T+i)->c2<<endl<<"moyenne : "<<(T+i)->m<<endl<<"moyenne generale : "<<x<<endl;
        
    
    return 0;
  }
  }