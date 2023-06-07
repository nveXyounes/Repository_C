#include <iostream>
  
  using namespace std;
   
   class stove {
        private:
             int temperature =  0;
        public:
             int get_temperature(){return temperature;}

     void setTemperature(int  temperature){

          if(temperature < 0) {this->temperature = 0;}
         
          else if(temperature >= 10) {this->temperature = 10;}
          
          else {this->temperature = temperature;}

     }            


   };

int main(){

    stove Stove;

    cout << "temperature = " << Stove.get_temperature()<<"\n";
    return 0;
}