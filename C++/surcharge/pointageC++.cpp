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


int main(int argc, char** argv) {
	Pointage P1;
	
	cin>>P1;
	
	cout<<P1;
	
	if(P1==15)
		cout<<"Le pointage existe "<<endl;
	else
		cout<<"Pas de pointage "<<endl;
		
		
	++P1;
	cout<<P1;
	
	return 0;
}