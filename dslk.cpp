#include<bits/stdc++.h>
using namespace std;


struct Node{
	int value;
	Node *pNext;
};typedef Node NODE;

struct List{
	NODE *pHead;
	NODE *pTail;
}; typedef List List;

bool Emtry(List &l){
	return (l.pHead==NULL);
}

NODE* creatNode(int value){
NODE* node= new NODE;
	node->pNext=NULL;
	node->value=value;
	return node;
	
}

void AddHead(List &l,int value)
{	Node* newnode=creatNode(value);

	if(Emtry(l)){
		l.pHead=l.pTail=newnode;	
	} 
	else{
	newnode->pNext=	l.pHead;
	l.pHead=newnode;
	}
}

void AddTail(List &l,int value){
	Node* newnode=creatNode(value);
	if(Emtry(l)){
		l.pHead=l.pTail=newnode;
	}
	else{
		l.pTail->pNext=newnode;
		l.pTail=newnode;
	}
}
List LIST;
void Init(int n){
int x;
	for(int i=0;i<n;i++)
		{
			cin>>x;
			AddTail(LIST,x);
		}
//	cout<<LIST.pTail->value;

}

void Print_List(List &l){
	
NODE* p=new Node;
	p=l.pHead;
	 while(p!=NULL){
	 	cout<<p->value<<" ";
	 	p=p->pNext;
	 	
	 	
	 }
}

void Del_head(List &l){
	if(l.pTail==l.pHead){
		delete l.pHead;
		l.pHead=l.pTail=NULL;
		
	}
	else{
		NODE* p=l.pHead;
		l.pHead=l.pHead->pNext;
		delete p;
		
	}
}
main(){
Init(3);
Del_head(LIST);
Print_List(LIST);
}

