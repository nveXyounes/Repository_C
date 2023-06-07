#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Pointage
{
	int matr;
	string nom;	
	int J,M,A;
	int HH,MM,SS;
	public:
		Pointage(int=0,string="",int=1,int=1,int=2000,int=0,int=0,int=0);
		friend ostream& operator<< (ostream&,Pointage);
		friend istream& operator>> (istream&,Pointage&);
		bool operator== (Pointage);
		Pointage operator++();
		friend class tabpoint;
};

Pointage::Pointage(int a,string b,int c,int d,int e,int f,int g,int h):matr(a),nom(b),J(c),M(d),A(e),HH(f),MM(g),SS(h)
{;}

ostream& operator<< (ostream& out,Pointage p)
{
	out<<"L'employé "<<p.nom<<", dont le marticule : "<<p.matr<<endl;
	out<<"a efectuer sont pointage le : "<<p.J<<"/"<<p.M<<"/"<<p.A<<", à : "<<p.HH<<":"<<p.MM<<":"<<p.SS<<endl;
	return out;
}

istream& operator>> (istream& in,Pointage &p)
{
	char c;
	cout<<"Veillez saisir vos information : "<<endl;
	cout<<"    - Matricule : ";
	in>>p.matr;
	cout<<"    - Nom : ";
	in>>p.nom;
	cout<<"    - Date du pointage : ";
	in>>p.J>>c>>p.M>>c>>p.A;
	cout<<"    - Temps du pointage : ";
	in>>p.HH>>c>>p.MM>>c>>p.SS;
	return in;
}

bool Pointage::operator== (Pointage p)
{
	return p.matr==this->matr;
}

Pointage Pointage::operator++()
{
	++HH;
	if(HH>23)
	{
		++J;
		HH=0;
	}
	return *this;
}
class tabpoint{
	Pointage *t;
	int nbr;
	public:
	tabpoint(int=1);
	~tabpoint();
	Pointage operator[](int);
	void creation(int);
	void affichage();
	int recherche(Pointage p,int);
	void ajout(Pointage p);
	void setheure(Pointage p);
};
	tabpoint::tabpoint(int n){
		nbr=n;
		t=new Pointage[nbr];
	
	}
	tabpoint::~tabpoint(){
		delete [] t;
	}
Pointage	tabpoint::operator[](int n){
		return t[n];
	}	
    	void tabpoint::creation(int i){
    		/*
    		for(int i=0;i<nbr;i++){
    			cout<<"------- saisie du pointage numéro "<<i+1<<"  -------"<<endl;
    			cin>>t[i];
			}*/
			if(i<nbr)
			{
				cout<<"------- saisie du pointage numéro "<<i+1<<"  -------"<<endl;
	    		cin>>t[i];
	    		creation(i+1);
    		}
    		
		}
			void tabpoint::affichage(){
    		   for(int i=0;i<nbr;i++){
    		
    			cout<<t[i]<<endl<<endl;
    			
			}
    		
		}
		   int  tabpoint::recherche(Pointage p,int i=0){
		   	
		   	if(p==t[i] || i>=nbr)
		   	{
		   		if (i>=nbr)
		   			return -1;
		   		else
		   			return i;
			   }
			else
				return recherche(p,i+1);
		   	/*
			  for(int i=0;i<nbr;i++){
				if(p==t[i])
				return i;
				
	}
	        	return -1;*/	}
	     void tabpoint:: ajout(Pointage p){
	        		if(recherche(p)==-1){
	        			Pointage *nt;
	        			nt=new Pointage[nbr+1];
	        			for(int i=0;i<nbr;i++){
	        				nt[i]=t[i];
						}
						nbr++;
						nt[nbr-1]=p;
						t=nt;
					}
					else{
						cout<<"le pointage a ete deja fait ."<<endl;
					}
			}
			void tabpoint::setheure(Pointage p){
					if(int pos=recherche(p)==-1){
						cout<<"Pas de pointage pour ce matricule:"<<p.matr<<endl;
					}
				   else{
				   	++t[pos];
				   }
				
			}
	        	
		
		
		
		
int main(int argc, char** argv) {

	
//	cout<<P1;
//	
//	if(P1==15)
//		cout<<"Le pointage existe "<<endl;
//	else
//		cout<<"Pas de pointage "<<endl;
//		
//		
//	++P1;
//	cout<<P1;
	
	         tabpoint T(2);
	         
	         T.creation(0);
	         T.affichage();
			 Pointage P1;
          	 cin>>P1;
          	 T.ajout(P1);
          	 T.affichage();
          	 cin>>P1;
          	 T.setheure(P1);
          	 T.affichage();
	
	    
	         
	         
	
	
	
	
	return 0;
}