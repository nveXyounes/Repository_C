#include <iostream>
#include <iomanip>

class Horloge {
private:
    int heures, minutes, secondes;

public:
    Horloge(int h, int m, int s) : heures(h), minutes(m), secondes(s) {}

    void incrementer() {
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

    void afficher()  {
        std::cout << std::setfill('0') << std::setw(2) << heures << ":"
                  << std::setfill('0') << std::setw(2) << minutes << ":"
                  << std::setfill('0') << std::setw(2) << secondes << std::endl;
    }
};

int main() {
    Horloge horloge(12, 30, 0);

    std::cout << "Heure actuelle : ";
    horloge.afficher();

    horloge.incrementer();

    std::cout << "Heure après incrémentation : ";
    horloge.afficher();

    return 0;
}