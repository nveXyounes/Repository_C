#include <iostream>
#include <iomanip>

 using namespace std;
   
   class Horloge {
private:
    int heures, minutes, secondes;

public:
    Horloge(int=0, int=0, int=0);
	bool operator==(Horloge);
    Horloge operator++(int);
	void afficher();
    void incrementer();
   };


   Horloge::Horloge(int h, int m, int s) : heures(h), minutes(m), secondes(s) {}

   bool Horloge::operator==(Horloge p){
	return (heures==p.heures && minutes==p.minutes && secondes==p.secondes);
}


   Horloge Horloge::operator++(int){

	Horloge tmp= *this;	
	heures++;
	minutes++;
    secondes++;
	return tmp;
}



    void Horloge::incrementer() {
        secondes++;

        if (secondes == 60) {
            secondes = 0;
            minutes++;

            if (minutes == 60) {
                minutes = 0;
                heures++;

                if (heures == 24) {
                    heures = 0;
                }
            }
        }
    }

    void Horloge::afficher()  {
       cout << setfill('0') << setw(2) << heures << ":"
                  << setfill('0') << setw(2) << minutes << ":"
                  << setfill('0') << setw(2) << secondes << endl;
    }

   int main(){
   
   Horloge horloge(23, 59, 59);

    cout << "Heure actuelle : ";
    horloge.afficher();

    horloge.incrementer();

    cout << "Heure après incrémentation : ";
    horloge.afficher();

   

 return 0;
   }