#include<iostream>
using namespace std;

class process{
	public:
	string id;
	int AT;
	int BT;
	process *next;
	process(){
		next=NULL;
	}
	
};
class list{
	process *head,*tail;
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

void sendSmall(process* ptr,int n,list* que){
	for(int l=0; l<n; l++){
	int temp=ptr->AT;
	process* tptr=ptr;
	ptr++;
	
	for(int i=0; i<n-1; i++){
		if(temp>=ptr->AT && ptr->AT!=0){
			temp=ptr->AT;
		}
		ptr++;
	}
	ptr=tptr;
	for(int i=0; i<n; i++){
		if(temp==ptr->AT){
		que->NQ(ptr->id,ptr->AT,ptr->BT);
		ptr->AT=0;
		break;
			}
		ptr++;
		}
	}
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
	list que,*quep=&que;
	process* SmPro; int k=0;
	while(k<n){
	sendSmall(pro,n,quep);
	
	k++;
	}
	
	process CP;
	for(int i=0; i<n; i++){
	CP=que.DQ();
	cout<<"Process ID is "<<CP.id<<endl;
	cout<<"Process AT is "<<CP.AT<<endl;
	cout<<"Process BT is "<<CP.BT<<endl<<endl;
	}
}
