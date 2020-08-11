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
	public:
	node *head,*tail;
	int size;
	public:
    queue(){
        head = NULL;
        tail = NULL;
        size=0;
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
		size++;
		return true;
	}
		else{
            tail->next = tnode;
            tail = tail->next;
            size++;
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
void sendSmall(node* ptr,int n,queue* que){
	for(int l=0; l<n; l++){
	int temp=ptr->pages;
	node* tptr=ptr;
	ptr++;
	
	for(int i=0; i<n-1; i++){
		if(temp>=ptr->pages && ptr->pages!=0){
			temp=ptr->pages;
		}
		ptr++;
	}
	ptr=tptr;
	for(int i=0; i<n; i++){
		if(temp==ptr->pages){
		que->NQ(ptr->name,ptr->pages);
		ptr->pages=0;
		break;
			}
		ptr++;
		}
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
		sendSmall(Q.head,Q.size,&Q);
		obj=Q.DQ();
		cout<<"name is "<<obj.name;
		cout<<"Pages is "<<obj.pages;
	
	}
	}while(x!=0);
}
