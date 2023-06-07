#include <iosrteam>
 using namespace std;

class DoublyLinkedList{
private:
	struct Node{
		int data;
		Node* next;
		Node* prev;

		Node(){
			next = NULL;
			prev = NULL;
		}
	};
	Node* head = NULL;
public:
	void append(int val){
		Node* newNode = new Node;
		newNode->data = val;
		if (head == NULL){
			head = newNode;
		}
		else{
			Node* temp = head;
			while (temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
		}
	}

	void insert_at_pos(int val, int pos){
		Node* newNode = new Node;
		newNode->data = val;
		if (head == NULL){//
			head = newNode;
			return;
		}//
		if (pos == 0){
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
			return;
		}

		Node* temp = head;
		for (int i = 0; i < pos && temp != NULL; i++){
			temp = temp->next;
		}

		if (temp == NULL){
			this->append(val);
			return;
		}

		newNode->prev = temp->prev;
		temp->prev->next = newNode;
		temp->prev = newNode;
		newNode->next = temp;
	}

	void remove(int val){
		if (head == NULL)
			return;

		Node* temp;
		temp = head;

		if (temp->data == val){
			head = temp->next;
			if (head != NULL)
				head->prev = NULL;
			delete temp;
			return;
		}

		while (temp != NULL && temp->data != val){
			temp = temp->next;
		}

		if (temp == NULL){
			return;
		}
		else{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			delete temp;
		}
	}

	void remove_at_pos(int pos){
		if (head == NULL)
			return;

		Node* temp = head;
		if (pos == 0){
			head = temp->next;
			if (head)
				head->prev = NULL;
			delete temp;
			return;
		}

		for (int i = 0; i < pos && temp != NULL; i++)
			temp = temp->next;

		if (temp == NULL)
			return;

		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
		delete temp;

	}

	void display(){
		Node* temp = head;
		while (temp != NULL){
			std::cout << temp->data << " ";
			temp = temp->next;
		}
		std::cout << std::endl;

	}

	void reverse_display(){
		Node* temp = head;
		while (temp->next != NULL){
			temp = temp->next;
		}
		//---------------------------
		while (temp != NULL){
			std::cout << temp->data << " ";
			temp = temp->prev;
		}
		std::cout << std::endl;

	}

	~DoublyLinkedList(){
		Node* temp = head;
		while (head != NULL){
			head = head->next;
			delete temp;
			temp = head;
		}
	}
};


 int main(){

	return 0;
 }