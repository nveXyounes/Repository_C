#include <iostream>

using namespace std;

// Définition de la structure de la pile
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class Pile {
private:
    Node* head;
public:
    // Constructeur par défaut
    Pile() {
        head = NULL;
    }

    // Fonction pour empiler un élément dans la pile
    void EMPILER(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    }

    // Fonction pour désempiler un élément de la pile
    void DESEMPILER() {
        if (head == NULL) {
            cout << "La pile est vide !" << endl;
        } else {
            Node* temp = head;
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete temp;
        }
    }

    // Fonction pour afficher la pile
    void VR_PILE() {
        if (head == NULL) {
            cout << "La pile est vide !" << endl;
        } else {
            Node* temp = head;
            cout << "Contenu de la pile : ";
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    // Fonction pour créer la pile
    void CR_PILE() {
        int n, value;
        cout << "Combien d'éléments voulez-vous empiler ?" << endl;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "Entrez l'élément " << i+1 << " : ";
            cin >> value;
            EMPILER(value);
        }
    }
};

int main() {
    Pile pile;
    pile.CR_PILE();
    pile.VR_PILE();
    pile.DESEMPILER();
    pile.VR_PILE();
    pile.DESEMPILER();
    pile.VR_PILE();
    return 0;
}
