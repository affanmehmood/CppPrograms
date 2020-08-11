#include<iostream>
#include<queue>
using namespace std;

struct node{
		int val;
		node *left, *right;
		node(){
			val=0;
			left=NULL;
			right=NULL;
		}
	};

node* newNode(int key){
	node* temp = new node;
	temp->key=key;
	temp->left=temp->right=NULL;
	return temp;
}

void insert(node* temp, int key){
	queue<node*> q;
	q.push(temp);
	
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(!temp->left){
			temp->left= newNode(key);
			break;
		}
		else
			q.push(temp->left);	
	}
}

void inOrder(node* temp){
	if(!temp)
	return;
	inOrder(temp->left);
}

//driver code
int main(){
	node* root = newNode(1);
	root->left = newNode(11);
	root->left->left= newNode()
	
}
