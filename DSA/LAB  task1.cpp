#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node *next;
	
};
class list{
	node *head,*tail;
	public:
    list(){
        head = NULL;
        tail = NULL;
    }
    void NQ(int n);
    int DQ();
    int size();
};

void list:: NQ(int n){
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL){
            head = tmp;
            tail = tmp;
        }
        else{
            tail->next = tmp;
            tail = tail->next;
        }
    }

int list:: DQ(){
	if(head){
	node *temp; int x;
	temp=head;
	head=head->next;
	x=temp->data;
	delete temp;
	return x;
}
}

int list:: size(){
	node* temp=head;
	int x=0;
	while(temp){
		x++;
		temp=temp->next;
	}
	return x;
}
int main(){
	cout<<"enter number of operations ";
	int count=0,mem;
	cin>>count;
	list queue;
	for(int i=0; i<count; i++){
		cout<<"enter data";
		cin>>mem;
		queue.NQ(mem);
		cout<<"size of the Q is "<<queue.size();
	}
}
