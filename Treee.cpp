#include<bits/stdc++.h>
using namespace std;

struct Node{
	int value;
	Node* pLeft;
	Node* pRight;
	
};typedef Node Node;

struct Tree{
	Node* pRoot;
}; typedef Tree Tree;

bool isEmtry(Tree &tr){
	return (tr. pRoot==NULL);
}

Node* CreatNode(int value){
Node* p=new Node;
	if(p==NULL){
		cout<<"Het bo nho";
		return NULL;
	} 
	else{
		p-> value=value;
		p-> pLeft=NULL;
		p-> pRight=NULL;
		
	}
	
}

void CreatTree(Tree &t){
	
}

void Init(){
freopen("int.txt","r",stdin);
}




main(){
Init();
}

