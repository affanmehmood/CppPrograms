#include<iostream>
using namespace std;

class process{
	public:
	string id;
	int AT;
	int BT;
	int CT;
	
	process *next;
	process(){
		next=NULL;
	}
	
};
class list{
	process *head, *tail;
	int CT;
	
	public:
    list(){
        head = NULL;
        tail = NULL;
    }
    void NQ(string id,int AT,int BT);
    process DQ();
    int size();
   friend void sendSmall(process* ptr, int n, list* que);
};

void list:: NQ(string id,int AT,int BT){
        process *tmp = new process;
        tmp->id = id;
        tmp->AT = AT;
        tmp->BT = BT;
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

process list:: DQ(){
	if(head!=NULL){
	process *temp,obj;
	temp=head;
	head=head->next;
	obj.id=temp->id;
	obj.AT=temp->AT;
	obj.BT=temp->BT;
	delete temp;
	return obj;
}
}

void sort(list* que){
	
}

int main(){
	cout<<"Enter number of processes "<<endl;
	int n; cin>>n;
	process *pro = new process[n];
	
	cout<<"Start entring data "<<endl;
	for(int i=0; i<n; i++){
		cout<<"enter Process ID "; cin>>pro->id;
		cout<<"enter Process AT "; cin>>pro->AT;
		cout<<"enter Process BT "; cin>>pro->BT;
	}
	list que;
	process obj;
	for(int i=0; i<n; i++){
	cout<<"Input ID ";	cin>>obj.id;
	cout<<"Input AT ";  cin>>obj.AT;
	cout<<"Input BT ";  cin>>obj.BT;
	
	que.NQ();
	sort(que);
}
}
