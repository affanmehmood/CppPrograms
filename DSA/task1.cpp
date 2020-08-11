#include<iostream>
using namespace std;

class node{
	public:
	string name;
	int pages;
	node* next;
	
	node(){
		name="";
		pages=0;
		next=NULL;
	}
};

class queue{
	node *head,*tail;
	public:
    list(){
        head = NULL;
        tail = NULL;
    }
    bool NQ(string n, int p);
	node DQ();
friend	void sendSmall(node* ptr,int n,queue* que);
    
};

bool queue:: NQ(string n, int p){
	node *tnode = new node;
	tnode->name=n;
	tnode->pages=p;
	
	if(head==NULL){
		head=tnode;
		tail=tnode;
		return true;
	}
		else{
            tail->next = tnode;
            tail = tail->next;
            return true;
        }
}
node queue:: DQ(){
	if(head!=NULL){
	node *temp,obj;
	temp=head;
	head=head->next;
	obj.name=temp->name;
	obj.pages=temp->pages;
	delete temp;
	return obj;
}
}


int main(){
	queue Q; int x;
	do{
	cout<<"Press 1 for NQ 2 for DQ ";
	cin>>x;
	if(x==1){
		string name;
		int p; bool ck;
		ck=Q.NQ(name,p);
		if(ck==true)
		cout<<"Sucessful NQ ";
		else{
			cout<<"Unsucessful NQ ";
		}
	}
	else{
		node obj;
		obj=Q.DQ();
		cout<<"name is "<<obj.name;
		cout<<"Pages is "<<obj.pages;
	
	}
	}while(x!=0);
}
