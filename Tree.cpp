#include<bits/stdc++.h>
using namespace std;
struct Node{
	int value;
	Node* tLeft;
	Node* tRight;
	Node* tParent;
}; typedef Node Node;

struct Tree{
	Node* tRoot;
}; typedef Tree Tree;

void Init_Tree(Tree &tr){
	tr.tRoot= NULL;
}

Node* CreatNode(int value){
Node* p= new Node;
	p-> value = value;
	p-> tRight = NULL;
	p-> tLeft = NULL;
	return p;
}

void InsertNode(Node* &tr,int value){

	if(tr!=NULL){
		if(tr->value<value) InsertNode(tr->tRight,value);
			else InsertNode(tr->tLeft,value);
	}
	else{
		Node* p= CreatNode(value);
		tr=p;
	}
}
int Height(Node* tr){

	if(NULL==tr) return 0;
	else return(max(Height(tr->tLeft),Height(tr->tRight))+1);
	
	
}

int Find(Node* tr,int key){
//Node* tr=tre;
	if(tr==NULL) return 0;
	if(tr->value==key) return 1; 
		else{
			if(tr->value>key) Find(tr->tLeft,key);else Find(tr->tRight,key); 
			
		}
}

Tree a;
void Init(){
int n,x;
freopen("int.txt","r",stdin);
Init_Tree(a);
cin>>n;
for(int i=1;i<=n;i++){
	cin>>x;
	InsertNode(a.tRoot,x);
	}
cout<<a.tRoot->tRight->value;
 
	
}

main(){
Init();
}

