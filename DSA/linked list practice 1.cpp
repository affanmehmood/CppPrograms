#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
	node* prev;
};


class list{
private:
    node *head,*tail;
public:
	list(){
	head=NULL;
	tail=NULL;	
	}
};

void list:: add(int n){
	node* temp = new node;
	temp->data = n;
	temp->next=NULL;
	
	if(head==NULL){
		head=temp;
		tail=temp;
		prev=temp;
	}
	else{
		tail->next=temp;
		tail=tail->next;
	}
}
