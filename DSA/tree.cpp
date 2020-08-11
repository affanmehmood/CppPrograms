#include<iostream>
using namespace std;

class Btree{
	
struct node{
		int val;
		node *left, *right;
		node(){
			val=0;
			left=NULL;
			right=NULL;
		}
	};

node *root;	 //in Btree class


public:
int size;
Btree(){
	size=0;
	root=NULL;
}


void insertNode(int x){
	node* ptr = new node;
	ptr->val=x;
	node* troot=root;
	
	if(root==NULL){
		root=ptr;
	}
	else{
		int count=0;
	
		do{
		if(x<troot->val)
				if(troot->left==NULL){
					count=1;
				}
				else{
				troot=troot->left;
				}
		else if(x>troot->val){
				if(troot->right==NULL){
					count=2;
				}
				else{
				troot=troot->right;
				}
		}
		
		}while(count!=1 || count!=2);
				if(count==1)
				troot->left=ptr;
				else if(count==2)
				troot->right=ptr;
	}
}

bool isEmpty(){
	return root!=NULL;
}

};

void Bprint(Btree root){
	
	
}

int main(){
	Btree pine;
	
}
