#include <iostream>
#include <iomanip>
using namespace std;

inline double calculeTTC(double PHT, int TVA=14){
	return PHT*(1+(double)TVA/100);
}


int main(int argc, char** argv) {
	
	double HT1,HT2,HT3, STTC;
	
	cout<<"Entrez le prix chawarma : ";
	cin>>HT1;
	cout<<"Entrez le prix pizza : ";
	cin>>HT2;
	cout<<"Entrez le prix tanjiaa : ";
	cin>>HT3;
	
	cout<<setprecision(2)<<fixed;
	
	cout<<"+-------------------------------------+"<<endl;
	cout<<"+ Produit   +   HT   + TVA +    TTC   +"<<endl;
	cout<<"+-------------------------------------+"<<endl;
	cout<<"+ Chaewarma +"<<setw(7)<<HT1<<" + 14  + "<<setw(8)<<calculeTTC(HT1)<<" +"<<endl;
	cout<<"+ pizza     +"<<setw(7)<<HT2<<" + 14  + "<<setw(8)<<calculeTTC(HT2)<<" +"<<endl;
	cout<<"+ tanjiaa   +"<<setw(7)<<HT3<<" + 14  + "<<setw(8)<<calculeTTC(HT3)<<" +"<<endl;
	cout<<"+-------------------------------------+"<<endl;
	STTC=calculeTTC(HT1)+calculeTTC(HT2)+calculeTTC(HT3);
	cout<<right;
	cout<<"+                Total TTC + "<<setw(8)<<STTC<<" +"<<endl;
	cout<<"+-------------------------------------+"<<endl;

	
	
	
	return 0;
}
