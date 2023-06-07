#include <iostream>

 using namespace std;
      
      class forme{
         protected: 
           string information;
         public: 
           forme();
           void affichage();
      };
         forme::forme(string a) : information(a) {;}
         void forme::affichage(){}

       class cercle : public forme{
          private:
           int r;
          public:
           cercle(int=0);
           float surf();
       };
           cercle::cercle(int R) : r(R) {;}

       class carre : public cercle{
          private:
           int a;
          public:
           float surf();
       };
           float carre::surf(){}

       class rectangle : public cercle{
          private:
           int h,l;
          public:
           float surf();
       };
           float rectangle::surf(){}

   int main(int argc, char  **argv){

    return 0;                
   }