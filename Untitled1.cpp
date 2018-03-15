#include<bits/stdc++.h>
#include<string>
using namespace std;
string s;

struct Node{
	string value;
	Node* pChild;
	Node* pNext;
}; typedef Node Node;

struct Tree{
	Node* pRoot;
}; typedef Tree Tree;

void Init_Tree(Tree &tr){
	tr.pRoot=NULL;
}

Node* CreatNode(string s){
Node* p=new Node;
	p->value=s;
	p->pChild=NULL;
	return p;
}
void Insert_Node(Node* tre,string value,int k){
Node*p=tre;

	while(p!=NULL){
		if(p->value==value) {
		  value.push_back(s[k]);
		Insert_Node(p->pChild,value,k+1);break;}
		else p->pNext;
		break;
	 }
	if(value==s) return;
	p=CreatNode(value);
	value.push_back(s[k]);
	Insert_Node(p->pChild,value,k+1);
}

Tree tr;
void Init(){
Init_Tree(tr);
freopen("int.txt","r",stdin);
s="Hao";
Insert_Node(tr.pRoot,"H",1);
}


main(){
Init();
cout<<tr.pRoot->pChild->value;
}

