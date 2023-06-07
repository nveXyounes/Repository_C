#include <iostream>
#include <iomanip>
  using namespace std;
 
  class temps{
   private :
        int h,m,s;
   public :
//fonctions and methodes
        temps(int hh = 0, int mm = 0, int ss = 0);
        void set_hms();
        int get_hours(){return h;}
        int get_minutes(){return m;}
        int get_seconds(){return s;} 
        void aff12();
        friend void aff24(temps);
        void incrementer();

};

    temps::temps(int hh, int mm, int ss):h(hh),m(mm),s(ss){;}

    void temps::set_hms(){
        cout << "Saisie l'heure : ";  cin >> h;
        cout << "Saisie le minutes : "; cin >> m;
        cout << "Saisie le second : "; cin >> s;
    }

    void aff24(temps T){
        cout << setfill('0') << setw(2) << T.h << ":"
                  << setfill('0') << setw(2) << T.m << ":"
                  << setfill('0') << setw(2) << T.s << endl;
    }

    void temps::aff12(){
        if(h<12)
        cout<<setw(2)<<h<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<" AM"<<endl;
     else
        cout<<setw(2)<<h-12<<":"<<setw(2)<<m<<":"<<setw(2)<<s<<" PM"<<endl;
        h=0;
    }

    void  temps::incrementer(){
           
        s++;
        if (s == 60) {
            s = 0;
            m++;
            if (m == 60) {
                m = 0;
                h++;
                if (h == 24) {
                    h = 0;
                    h++;
                }
            }
        } 
    }   

 int main(){


   temps T1(12,30,0);
   temps T2(13);

    aff24(T1);
    T1.aff12();
    cout << "Heure actuelle : ";
    aff24(T1);
    T1.incrementer();
    cout << "Heure après incrémentation : ";
    aff24(T1);

cout << "\n";

    T2.set_hms();
    aff24(T2);
    T2.aff12();
    cout << "Heure actuelle : ";
    aff24(T2);
    T2.incrementer();
    cout << "Heure après incrémentation : ";
    aff24(T2);
 }