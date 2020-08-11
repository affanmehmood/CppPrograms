#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list(){
        head = NULL;
        tail = NULL;
    }

void add_node(int n){
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

node* gethead(){
        return head;
    }

static void display(node *head){
        if(head == NULL){
            cout << "NULL" << endl;
        }
        else{
            cout << head->data << endl;
            display(head->next);
        }
    }

static void concatenate(node *a,node *b){
        if( a != NULL && b!= NULL )
        {
            if(a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }

void front(int n){
        node *tmp = new node;
        tmp -> data = n;
        tmp -> next = head;
        head = tmp;
    }

void after(node *a, int value){
        node* p = new node;
        p->data = value;
        p->next = a->next;
        a->next = p;
    }

void del (node *before_del){
        node* temp;
        temp = before_del->next;
        before_del->next = temp->next;
        delete temp;
    }
};

void displayOdd(node *ptr){
	
	while(ptr){
			cout<<ptr->data;
			
			ptr=ptr->next->next;
			cout<<endl;
		}
	}

int main(){
    linked_list a;
    int x;
    for(int i=0; i<6; i++){
    cin>>x;
    a.add_node(x);
	}
	/*displayOdd(a.gethead());*/
	node* prev = a.gethead();
	
	for(int i=0; i<6; i++){
		if(i==4 || i==3 || i==2){
			prev.del(){
				
			}
		}
	}
    //linked_list::display(a.gethead());
    return 0;
}
