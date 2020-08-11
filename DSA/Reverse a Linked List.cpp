#include<iostream>
using namespace std;
class student{
	public:
	int roll;
	string name;
	student(){
		roll=0;
		name=" ";
	}
};

class node{
	public:
	node* next;
	student boy;
	node(){
		next = NULL;
	}
};

class list{
	public:
	node* head;
	node* tail;
	node obj;
	int size;
	void add(string name, int roll);
	void print();
	void remove(int);
	bool hasNext(node*);
	void next(node*&);
	void reverse();
	list(){
		head = NULL;
		tail = NULL;
	}
};

void list:: add(string name, int roll){
	node* n = new node;
	n->boy.name = name; n->boy.roll = roll;
	
	if(head==NULL){
		head=n;
		tail=n;
		size = 1;
	}
	else{
		tail->next = n;
		tail = n;
		size++;
	}
}

void list:: print(){
	node* og = head; 
	if(og == NULL) return;
	while(og!=NULL){
		cout<<"Name: "<<og->boy.name<<"\nID: "<<og->boy.roll<<"\n";
		og = og->next;
	}
}

void list:: remove(int roll){
	node* ptr = this->head;
	
	if(head==NULL) // if list is empty
		return;
		
		if(ptr->boy.roll==roll && !hasNext(ptr)){ // if list has only head
		delete ptr;
		head=NULL;
		tail=NULL;
		size--;
		return;
		}
	
	if(ptr->boy.roll == roll && hasNext(ptr)){ // head to delete with list >1 size
		head = ptr->next;
		delete ptr;
		size--;
		return;
	}
	
	while(hasNext(ptr)){
		if(ptr->next->boy.roll==roll){
			if(hasNext(ptr->next)){ // if its in the middle
				node* temp = ptr->next;
				ptr->next = ptr->next->next;
				delete temp;
				size--;
				break;
			} else{ // its the tail
				node* temp = ptr->next;
				ptr->next = NULL;
				tail = ptr;
				delete temp;
				size--;
				return;
			}
		}
		next(ptr);
	}
}

bool list::hasNext(node* ptr){
	if(ptr->next!=NULL){
		return true;
	} else{
		return false;
	}
}

void list::next(node* &ptr){
	ptr = ptr->next;
}

void list:: reverse(){
	
	node* ptr=head;

	for(int i=0; i<size; i++){
		for(int k=0; k<size-i; k++){
			if(hasNext(ptr->next)){
			node* temp = ptr->next;
			ptr->next = ptr->next->next;
			temp->next = ptr->next->next;
			ptr->next->next = temp;
			ptr = temp;
			} else{
				ptr->next = head;
			}
		}
		ptr=head;
	}
	tail->next = head->next;
	head->next = NULL;
	node* og = head;
	head = tail;
	tail = og;
}

int main(){
	list students;
	students.add("Affan",1);
	students.add("Usman",2);
	students.add("Asif",3);
	students.add("Ikram",4);
	students.add("Talha",5);
	students.add("Hamza",6);
	
	students.print();
	
	students.reverse();
	cout<<"\n\nReversing..\n\n";
	students.print();
}

