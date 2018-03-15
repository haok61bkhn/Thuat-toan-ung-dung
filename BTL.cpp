#include<bits/stdc++.h>
#include<string>
using namespace std;
struct Node{
	string value;
	Node* pNext;
};typedef Node Node;


int k;

struct List{
	Node* pHead;
	Node* pTail;
}; typedef List List;
List c[10000000];

Node* CreatNode(string s){
Node* p=new Node;
	p->value=s;
	p->pNext=NULL;
}

void Add_list(string value,int x){

Node* p=CreatNode(value);
	if(c[x].pTail==c[x].pHead){
		c[x].pTail=c[x].pHead=p;
	}else
	{
	c[x].pTail=p;
	c[x].pTail->pNext=p;
	}
}

long  Hashmap(string s){
long  sum=1;
	for(int i=0;i<s.length();i++)
		sum=(sum*(int(s[i])-96)+(int(s[i])-96)*(int(s[i])-96))%1000009;
	
	return sum;
}
void Init(){
char *x;
int Max=1;

ifstream cin("dictionary.txt");
	while(!cin.eof())
		{
			cin>>x;
			Add_list(x, Hashmap(x));
		}
	cout<<c[199].pHead->value;

}
	

main(){
Init();
}

