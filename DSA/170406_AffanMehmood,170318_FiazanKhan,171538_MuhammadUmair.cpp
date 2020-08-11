#include<iostream>
using namespace std;

bool checkVal(Node* tree, int x)
{
	if(tree==NULL)
		return false;  //tree is empty or has reached leaf
	if(tree->data==x)
		return true;   //value is present
	return checkVal(tree->left,x) || checkVal(tree->right,x); // first it will recurse left and then right and keep doing that until it matches or tree is empty 
}

Node *lca(Node *root, int v1,int v2) {
		Node* troot=root;
		if(root==NULL){
		return NULL;
	}
	else{
		bool flag=false;
		if(checkVal(root->left,v1) && checkVal(root->right,v2))
		flag=true;
		
		while(!troot){
			if((troot->data > v1 && troot->data < v2) || (troot->data > v2 && troot->data < v1)){ //if the values have to diverge for the root
			if(troot->right!=NULL && troot->left!=NULL){
			if(flag==true)
			return troot;
		}
			}
				else
					return NULL;
					
			else if(troot->data > v1 && troot->data > v2){ //if both values are less move to left
					troot=troot->left;
			}
			else if(troot->data < v1 && troot->data < v2){ //if both values are less move to left
					troot=troot->right;
			}
		}
	}
		return NULL;
}

int main(){
	
}
