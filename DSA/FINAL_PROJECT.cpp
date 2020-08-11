#include<iostream> 
#include<string>
using namespace std; 
int count=0;
int yeh=0;
int card =0;
int naam=0;
int gee=0;
int umar=0;
int scor=0;
class node 
{ public:
    int ID;
	string fname;
	float cgpa;
	int age;
	float test; 
     node *left, *right; 
}; 
   
 node *newNode(int item,string name,float gpa,int age,float score) 
{ 
     node *temp =  new node;
    temp->ID = item; 
    temp->fname=name;
    temp->cgpa=gpa;
    temp->age=age;
    temp->test=score;
    
    temp->left = temp->right = NULL; 
    return temp; 
} 
    
void inorder( node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        cout<< root->ID<<" _ "<<root->age<<" _ "<<root->cgpa<<" _ "<<root->fname<<" _ "<<root->test<<endl; 
        inorder(root->right); 
    } 
} 
   

 node* insert( node* node, int ide,string name,float gpa ,int age,float score) 
{ 
    card++;
    if (node == NULL) 
	return newNode(ide,name,gpa,age,score); 
  
    if (ide < node->ID) 
        node->left  = insert(node->left, ide,name,gpa,age,score); 
    else if (ide > node->ID) 
        node->right = insert(node->right, ide,name,gpa,age,score);    
  

    return node; 
} 
 


 node* insertAge( node* node, int ide,string name,float gpa ,int age,float score) 
{ 
    umar++;
    if (node == NULL) 
	return newNode(ide,name,gpa,age,score); 
  
    if (age < node->age) 
        node->left  = insertAge(node->left, ide,name,gpa,age,score); 
    else if (age > node->age) 
        node->right = insertAge(node->right, ide,name,gpa,age,score);    
  

    return node; 
} 


   

 node* insertGpa( node* node, int ide,string name,float gpa ,int age,float score) 
{ 
    gee++;
    if (node == NULL) 
	return newNode(ide,name,gpa,age,score); 
  
    if (gpa < node->cgpa) 
        node->left  = insertGpa(node->left, ide,name,gpa,age,score); 
    else if (gpa > node->cgpa) 
        node->right = insertGpa(node->right, ide,name,gpa,age,score);    
  

    return node; 
} 

 
   

 node* insertScore( node* node, int ide,string name,float gpa ,int age,float score) 
{ 
    scor++;
    if (node == NULL) 
	return newNode(ide,name,gpa,age,score); 
  
    if (score < node->test) 
        node->left  = insertScore(node->left, ide,name,gpa,age,score); 
    else if (score > node->test) 
        node->right = insertScore(node->right, ide,name,gpa,age,score);    
  

    return node; 
} 
 node*  min( node* root) 
{ 
    node* current = root; 
  
    
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
  

 node* delete_Node_rid( node* root, int  reg) 
{ 
    
    if (root == NULL) return root; 
  
  
    if (reg < root->ID) 
        root->left = delete_Node_rid(root->left, reg); 
 
    else if (reg > root->ID) 
        root->right = delete_Node_rid(root->right, reg); 
  
 
    else
    { 
        
        if (root->left == NULL) 
        { 
             node *temp = root->right; 
            delete(root); 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
             node *temp = root->left; 
            delete(root); 
            return temp; 
       } 
  
  

  

 node *temp = min(root->right); 
  root->ID = temp->ID; 
  root->right = delete_Node_rid(root->right, temp->ID); 
}
    return root; 
}   
void take_input( node array[3])
{
	int loli=0;
	float pop=0.0;
	string lm="NULL";
	int hj=0;
	float peeku=0.0;
	
   for(int i=0;i<3;i++)
   
  {
  	cout<<"Taking data of 1st 3 students "<<endl<<endl;
  	
   cout<<"FOR "<<i+1<<"ST STUDENT"<<endl;
    cout<<"Age :";
   cin>>array[i].age;
   if(array[i].age==loli)
   {cout<<"Wrong entry enter again";
   cin>>array[i].age;
   }
   loli=array[i].age;
   cout<<"CGPA :";
   cin>>array[i].cgpa;
    if(array[i].cgpa==pop)
   {cout<<"Wrong entry enter again";
   cin>>array[i].cgpa;
   }
   pop=array[i].cgpa;
   
   cout<<"FNAME :";
   cin>>array[i].fname;
    if(array[i].fname==lm)
   {cout<<"Wrong entry enter again";
   cin>>array[i].fname;
   }
   lm=array[i].fname;
   cout<<"ID :";
   cin>>array[i].ID;
    if(array[i].ID==hj)
   {cout<<"Wrong entry enter again";
   cin>>array[i].ID;
   }
   hj=array[i].ID;
   cout<<"Test SCORE :";
   cin>>array[i].test;
    if(array[i].test==peeku)
   {cout<<"Wrong entry enter again";
   cin>>array[i].test;
   }
   peeku=array[i].test;
}
}
node* search(node* root,int key)
{
	if(root==NULL || root->ID==key)
{
		return root;
}
	if(key<root->ID)
{
		return search(root->left,key);
}
    if(key>root->ID)
 {
	   return search(root->right,key);
}
}

node* searchAge(node* stem,int umr)
{
	if(stem==NULL || stem->age==umr)
{
		return stem;
}
	if(umr<stem->age)
{
		return searchAge(stem->left,umr);
}
    if(umr>stem->ID)
{
	    return search(stem->right,umr);
}
}

node* searchGpa(node* rootGpa,float gpa)
{
	if(rootGpa==NULL || rootGpa->cgpa==gpa)
{
		return rootGpa;
}
	if(gpa<rootGpa->cgpa)
{
		return searchGpa(rootGpa->left,gpa);
}
    if(gpa>rootGpa->cgpa)
 {
	   return searchGpa(rootGpa->right,gpa);
}
}

node* searchScore(node* score,float t)
{
	if(score==NULL || score->test==t)
{
		return score;
}
	if(t<score->test)
{
		return searchScore(score->left,t);
}
    if(t>score->test)
 {
	   return searchScore(score->right,t);
}
}

int height( node* node)  
{ 
   if (node==NULL)
       return 0; 
   else 
   { 
       
       int lheight = height(node->left); 
       int rheight = height(node->right);
  
       
       if (lheight >
	   	 rheight)  
           return(lheight+1); 
       else return(rheight+1); 
   } 
} 

int nodeheight(node* root,int data,int value )
{
	if(root==NULL)
	{
		return -1;
	}
	if(data==root->ID)
	{
		return value;
	}
	if(data<root->ID)
{
		return nodeheight(root->left,data,value+1);
	
}
	if(data>root->ID)
{
		return nodeheight(root->right,data,value+1);

}
}


node*  minGpa( node* rootGpa) 
{ 
    node* current = rootGpa; 
  
    
    while (current->left != NULL) 
        current = current->left; 
  
    return current; 
} 
  

 node* delete_Node_gpa( node* rootGpa, float  gpa) 
{ 
    
    if (rootGpa == NULL) return rootGpa; 
  
  
    if (gpa < rootGpa->cgpa) 
        rootGpa->left = delete_Node_gpa(rootGpa->left, gpa); 
 
    else if (gpa > rootGpa->cgpa) 
        rootGpa->right = delete_Node_gpa(rootGpa->right, gpa); 
  
 
    else
    { 
        
        if (rootGpa->left == NULL) 
        { 
             node *temp = rootGpa->right; 
            delete(rootGpa); 
            return temp; 
        } 
        else if (rootGpa->right == NULL) 
        { 
             node *temp = rootGpa->left; 
            delete(rootGpa); 
            return temp; 
       } 
  
  

   node *temp = minGpa(rootGpa->right); 
  rootGpa->cgpa = temp->cgpa; 
  rootGpa->right = delete_Node_gpa(rootGpa->right, temp->cgpa); 
}
    return rootGpa; 
}   

int nodeheightAge(node* stem,int ageV,int value )
{
	if(stem==NULL)
	{
		return -1;
	}
	if(ageV==stem->age)
	{
		return value;
	}
	if(ageV<stem->age)
{
		return nodeheightAge(stem->left,ageV,value+1);
	
}
	if(ageV>stem->age)
{
		return nodeheightAge(stem->right,ageV,value+1);

}
}

int nodeheightGpa(node* rootGpa,float gpa,int value )
{
	if(rootGpa==NULL)
	{
		return -1;
	}
	if(gpa==rootGpa->cgpa)
	{
		return value;
	}
	if(gpa<rootGpa->cgpa)
{
		return nodeheightGpa(rootGpa->left,gpa,value+1);
	
}
	if(gpa>rootGpa->cgpa)
{
		return nodeheightGpa(rootGpa->right,gpa,value+1);

}
}

int nodeheightScore(node* score,float t,int value )
{
	if(score==NULL)
	{
		return -1;
	}
	if(t==score->test)
	{
		return value;
	}
	if(t<score->test)
{
		return nodeheightScore(score->left,t,value+1);
	
}
	if(t>score->test)
{
		return nodeheightScore(score->right,t,value+1);

}
}
node* insertName( node* node, int ide,string name,float gpa ,int age,float score) 
{ 
    naam++;
    if (node == NULL) 
	return newNode(ide,name,gpa,age,score); 
  
    if (name < node->fname) 
        node->left  = insertName(node->left, ide,name,gpa,age,score); 
    else if (name > node->fname) 
        node->right = insertName(node->right, ide,name,gpa,age,score);    
  

    return node; 
} 

 node* delete_Node_name( node* fake, string  nam) 
{ 
    
    if (fake == NULL) return fake; 
  
  
    if (nam < fake->fname)
       fake->left = delete_Node_name(fake->left, nam); 
 
    else if (nam > fake->fname) 
        fake->right = delete_Node_name(fake->right, nam); 
  
 
    else
    { 
        
        if (fake->left == NULL) 
        { 
             node *temp = fake->right; 
            delete(fake); 
            return temp; 
        } 
        else if (fake->right == NULL) 
        { 
             node *temp = fake->left; 
            delete(fake); 
            return temp; 
       } 
  
node *temp = min(fake->right); 
  fake->ID = temp->ID; 
  fake->right = delete_Node_name(fake->right, temp->fname); 
}
    return fake; 
}  

node* searchName(node* fake,string n)
{
	if(fake==NULL || fake->fname==n)
	return fake;
	
	if(n<fake->fname)
	return searchName(fake->left,n);
	 
    if(n>fake->fname)
    return searchName(fake->right,n);
} 


void PostOrder( node *fake) 
{ 
    if (fake != NULL) 
    { 
        PostOrder(fake->left); 
        PostOrder(fake->right); 
        cout<< fake->ID<<" _ "<<fake->age<<" _ "<<fake->cgpa<<" _ "<<fake->fname<<" _ "<<fake->test<<endl; 
         
    } 
} 

void PreOrder( node *fake) 
{ 
    if (fake != NULL) 
    {      cout<< fake->ID<<" _ "<<fake->age<<" _ "<<fake->cgpa<<" _ "<<fake->fname<<" _ "<<fake->test<<endl;
        PreOrder(fake->left); 
        PreOrder(fake->right); 
      
         
    } 
} 

void del( node *fake) 
{ 
    if (fake != NULL) 
    { 
        del(fake->left); 
        del(fake->right); 
        
        delete(fake);
         
    } 
} 



int main() 

{
	int option=0;
	string nam;


 node arr[3];

  
   
int choice;
node *root=NULL;
node *id, *lol, *krdo, *zero, *ibn;
node *stem=NULL;
node *rootGpa=NULL;
node *score=NULL;
node *fake=NULL;

	while(option!=9)
{
	cout<<"***************************************WELCOME*********************************"<<endl<<endl;
cout<<"Press 1 to take input Student Data "<<endl<<"Press 2 to Build a tree "<<endl<<"Press 3 to Search in tree "<<endl<<"Press 4 to Insert a node"<<endl<<"Press 5 to check height"<<endl<<"Press 6 to delete a node"<<endl<<"Press 7 to do a tree traversal"<<endl<<"Press 8 to delete"<<endl<<"Press 9 to escape";
cin>>option;

if(option==1)
{
take_input(arr);

}
if(option==2)
{

cout<<"1 FOR ID BASED BST and 2 for Age based BST, 3 for GPA based BST ,4 for Test score based BST,5 for NAME ";
cin>>choice;
if(choice==1)
{


for(int i=0;i<3;i++)
{

root=insert(root,arr[i].ID,arr[i].fname,arr[i].cgpa,arr[i].age,arr[i].test);
}

}
if(choice==2)
{
	
	for(int i=0;i<3;i++)
{

stem=insertAge(stem,arr[i].ID,arr[i].fname,arr[i].cgpa,arr[i].age,arr[i].test);
}

}
if(choice==3)
{
		
	for(int i=0;i<3;i++)
{

rootGpa=insertGpa(rootGpa,arr[i].ID,arr[i].fname,arr[i].cgpa,arr[i].age,arr[i].test);
}


}
if(choice==4)
{
		
	for(int i=0;i<3;i++)
{

score=insertScore(score,arr[i].ID,arr[i].fname,arr[i].cgpa,arr[i].age,arr[i].test);
}

}
if(choice==5)
{
	for(int i=0;i<3;i++)


fake=insertName(fake,arr[i].ID,arr[i].fname,arr[i].cgpa,arr[i].age,arr[i].test);
}

       
}
if(option==3)
{       
	cout<<"Presss 1 to search in ID based tree , 2 to search in Age based BST ,3 to search in Gpa based BST ,4 to search in Test score based BST";
	cin>>choice;
	if(choice==1)
	{   
		
	 int roll;
	 if(card==0)
	  { cout<<"Tree not available "<<endl;
		 } 
		 else
		{
		cout<<"Enter the rollno to search ";
		cin>>roll;
		id=search(root,roll);
	cout<<id->age<<"_"<<id->cgpa<<"_"<<id->fname;
}
	}
	if(choice==2)
	{  int umr;
	if(umar==0)
	{
		cout<<"Tree not available"<<endl;
	}
		else
		{
		cout<<"Enter the age";
		cin>>umr;
		lol=searchAge(stem,umr);
		cout<<lol->age<<"_"<<lol->cgpa<<"_"<<lol->fname;
}
	}
	if(choice==3)
	{ float gpa;
	if(gee==0)
	{
	cout<<"Tree not available "<<endl;
}
else
	{
	cout<<"Enter the gpa";
	cin>>gpa;
	krdo=searchGpa(rootGpa,gpa);
	cout<<krdo->age<<"_"<<krdo->cgpa<<"_"<<krdo->fname;
		
}	}
	if(choice==4)
	{
		float tes;
		if(scor==0)
		{
			cout<<"Tree not available"<<endl;
		}
		else
		{
		
		cout<<"Enter the test score";
		cin>>tes;
		zero=searchScore(score,tes);
		cout<<zero->age<<"_"<<zero->cgpa<<"_"<<zero->fname;
	}
	}
	if(choice==5)
	{
		string nam;
		if(naam==0)
		{cout<<"Tree not available ";
		}
		else{
		
		cout<<"Enter the name";
		cin>>nam;
		ibn=searchName(fake,nam);
	}	cout<<ibn->age<<"_"<<ibn->cgpa<<"_"<<ibn->fname;
	}
}
if(option==4)
{    int mout=0;
	int cnic=0;
	string name;
	int ge=0;
	float gpa=0.0;
	float tscore=0.0;
	cout<<"Enter id :";
	cin>>cnic;
	cout<<"Enter name :";
	cin>>name;
	cout<<"Enter age :";
	cin>>ge;
	cout<<"Enter cgpa :";
	cin>>gpa;
	cout<<"Enter Test score :";
	cin>>tscore;
	cout<<"1 for ID based ,2 for GPA based ,3 for Age based ,4 for Test score based ,5 for name based";
	cin>>mout;
	if(mout==1)
	{
		insert(root,cnic,name,gpa,ge,tscore);
	}
	if(mout==2)
	{
		insertGpa(rootGpa,cnic,name,gpa,ge,tscore);
		
	}
	if(mout==3)
	{
		insertAge(stem,cnic,name,gpa,ge,tscore);
	}
	if(mout==4)
	{
		insertScore(score,cnic,name,gpa,ge,tscore);
	}
	if(mout==5)
	{insertName(fake,cnic,name,gpa,ge,tscore);
	}
}
if(option==5)
{   int theek=0,fook=0;
    cout<<"1 for Height of tree, 2 for height of NODE ";
    cin>>fook;
    if(fook==1)
    {
	
	cout<<"1 for ID based BST ,2 for gpa based BST ,3 for Age based BST ,4 for Test score based BST :";
	cin>>theek;
	if(theek==1)
	{
		int ok=height(root);
        cout<<ok<<endl;
		
	}
	if(theek==2)
	{
		int ok=height(rootGpa);
		cout<<ok<<endl;
	}
	if(theek==3)
	{
		int ok=height(stem);
		cout<<ok<<endl;
	}
	if(theek==4)
	{
		int ok=height(score);
		cout<<ok<<endl;
	}
}
if(fook==2)
{ int op=0;
float gps=0.0;
int aeg=0;
int ok=0;
float core=0.0;
	cout<<"1 for ID based BST ,2 for gpa based BST ,3 for Age based BST ,4 for Test score based BST :";
	cin>>theek;
	if(theek==1)
	{ cout<<"Enter id";
	cin>>op;
		ok=nodeheight(root,op,1);
		cout<<ok;
	}
	if(theek==2)
	{ 
		
		
			cout<<"Enter gpa";
			cin>>gps;
			ok=nodeheightGpa(rootGpa,gps,1);
			cout<<ok;
		
}
		if(theek==3)
		{
			cout<<"Enter age";
			cin>>aeg;
			ok=nodeheightAge(stem,aeg,1);
			cout<<ok;
		}
		if(theek==4)
		{
			cout<<"Enter score";
			cin>>core;
			ok=nodeheightScore(score,core,1);
			cout<<ok;
		}
		
	}
}
if(option==6)
{ int han=0,eye=0;
float marks=0.0;
	cout<<"1 FOR ID ,2 FOR CGPA,3 for name";
	cin>>han;
	if(han==1)
	
	
	{
		if(card==0)
		{
			cout<<"Tree not available";
		}
		else
		{
		
	  cout<<"Enter the id";
	    cin>>eye;
		root=delete_Node_rid(root,eye);
		cout<<"Deleted";
	}
	}
	if(han==2)
	{
		if(gee==0)
		{
			cout<<"Tree not available ";
			
		}
		else
		{
		
		cout<<"Enter the GPA";
		cin>>marks;
		rootGpa=delete_Node_gpa(rootGpa,marks);
}
	}
	if(han==3)
	{
		if(naam==0)
		{
			cout<<"Tree not available";
			
		}
		else
		{
		
		cout<<"Enter tha name";
		cin>>nam;
		fake=delete_Node_name(fake,nam);
	
	}}
}
if(option==7)
{ int chal=0, kal=0;
  cout<<"1 FOR INORDER ,2 FOR POST ORDER,3 FOR PRE ORDER";
  cin>>kal;
  if(kal==1)
  {
  
	cout<<"1 for id ,2 for age ,3 for cgpa,4 for TESTscore,5 for name";
	cin>>chal;
	if(chal==1)
	{ if(card==0)
	{
		cout<<"Tree unavailable "<<endl;
	}
	else
	{
	
		inorder(root);
	}
	}
	if(chal==2)
	{
		if(umar==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else{
		
		inorder(stem);
	}
	}
	if(chal==3)
	{
			if(gee==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else{
		
		inorder(rootGpa);
	}
	}
	if(chal==4)
	{
			if(scor==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		inorder(score);
}
	}
	if(chal==5)
	{
			if(naam==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		inorder(fake);
}
	}
}

  if(kal==2)
  {
  
	cout<<"1 for id ,2 for age ,3 for cgpa,4 for TESTscore,5 for name";
	cin>>chal;
	if(chal==1)
	{
		if(card==0)
	{
		cout<<"Tree unavailable "<<endl;
	}
	else
	{
			PostOrder(root);
		}
	}
	if(chal==2)
	{
			if(umar==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PostOrder(stem);
	}
	}
	if(chal==3)
	{
			if(gee==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PostOrder(rootGpa);
	}
	}
	if(chal==4)
	{
				if(scor==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PostOrder(score);
}
	}
	if(chal==5)
	{
			if(naam==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PostOrder(fake);
	}
	}
}

 if(kal==3)
  {
  
	cout<<"1 for id ,2 for age ,3 for cgpa,4 for TESTscore,5 for name";
	cin>>chal;
	if(chal==1)
	{
				if(card==0)
	{
		cout<<"Tree unavailable "<<endl;
	}
	else
	{
	
		PreOrder(root);
	}
	}
	if(chal==2)
	{
				if(umar==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PreOrder(stem);
	}
	}
	if(chal==3)
	{
				if(gee==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PreOrder(rootGpa);
	}
	}
	if(chal==4)
	{		
	if(scor==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PreOrder(score);
	}
	}
	if(chal==5)
	{
				if(naam==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		PreOrder(fake);
	}
	}
}
}
if(option==8)
{  int chal;
		cout<<"1 for id ,2 for age ,3 for cgpa,4 for TESTscore,5 for name";
	cin>>chal;
	if(chal==1)
	{
				if(card==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		del(root);
		card=0;
	}
	}
	if(chal==2)
	{  		if(umar==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		del(stem);
		umar=0;
	}
	}
	if(chal==3)
	{ 		if(gee==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		del(rootGpa);
		gee=0;
	}
	}
	if(chal==4)
	{
				if(scor==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		del(score);
		scor=0;
	}
	}
	if(chal==5)
	{ 		if(naam==0)
		{
			cout<<"Tree unavailable"<<endl;
		}
		else
		{
		
		del(fake);
		naam=0;
	}
	}
}
}
 return 0; 
 
}

