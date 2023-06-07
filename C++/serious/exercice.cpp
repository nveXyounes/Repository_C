#include <iostream>

  using namespace std;

  struct palindrome {
        string pali;
        palindrome* next;
        palindrome* prev;
};

  class Pile {
    private:
        palindrome* head;
    public:

  Pile() {
        head = NULL;
    }

    void EMPILER(int value) {
        palindrome* newpalindrome = new palindrome;
        newpalindrome->pali = value;
        newpalindrome->next = head;
        newpalindrome->prev = NULL;
        if (head != NULL) {
            head->prev = newpalindrome;
        }
        head = newpalindrome;
    }

    void VR_PILE() {
        if (head == NULL) {
            cout << "La pile est vide !" << endl;
        } else {
            palindrome* temp = head;
            cout << "Contenu de la pile : ";
            while (temp != NULL) {
                cout << temp->pali << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    void CR_PILE(head *H) {
        liste *nv;
        string cnt;
          nv = new liste;
          cout << "voici notre FILE!" << endl;
       do{
          cout <<"entrez un mot lettre par lettre : ";
          cin >> nv->lett.lettre;
          nv -> sv = NULL;
        if(!H -> fin)
         H -> deb = nv;
         else
         H -> fin -> sv = nv;
         H -> fin=nv;
         cout <<"vous voulez continuer de mettre lettre par lettre si oui 'y' sinon 'n' \n"; 
         cin >> cnt;
    }
       while(cnt == 'y');
  }
};
  int main(){
    Head H;
     H.deb = H.fin = NULL;
    CR_PILE(&H);
    VR_PILE(&H);
    return  0;
  }