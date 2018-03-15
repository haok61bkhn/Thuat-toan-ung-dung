#include<bits/stdc++.h>
#include<string>
#define Nmax int(1e5)
using namespace std;
char s[30][30];
int n;
struct  Node{
	string value;
	Node *pNext;
}; typedef Node Node;

struct List{
	Node *pHead;
	Node *Ptail;
}; typedef List List;

bool Emtry(List &l){
	return(l.pHead==NULL); 
}

Node* CreatNode(string s){
	Node *p=new Node;
	if(p==NULL) return NULL;
	p->value=s;
	p->pNext=NULL;
	
    return p;
}

void Add_list(List &l,string value){
Node* p=CreatNode(value);
	if(Emtry(l)){
		l.pHead=l.Ptail=p;
	}
	else{
		l.Ptail->pNext=p;
		l.Ptail=p;
		p->pNext=NULL;
	}
	
}

void Removelist(List &l){
Node *p=new Node;
	while(l.pHead!=NULL){
		p=l.pHead;
		l.pHead=l.pHead->pNext;
		delete p;
	}
 l.pHead=l.Ptail=NULL;
}

long Hash(string s){
long sum=0;
	for(int i=0;i<s.length();i++)
		sum+=(s[i]-96)*(i+1)+1;	
	return sum%9999;

}

List a[Nmax];

bool Check_Voca(string s){
Node *p=a[Hash(s)].pHead;
	while(p!=NULL){
		if((p->value)==s) return true;
		p=p->pNext;
	}
	return false;
	
}

void Init(){
string x;
long d=0;
	
ifstream cin1("dictionary.txt");
	while(!cin1.eof()){
		cin1>>x;
		d++;
		if (x=="ef") cout<<d<<" " ;
		Add_list(a[Hash(x)],x);
	}

freopen("int.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>s[i][j];
	
}



void Finish(List a[]){
	for(int i=0;i<Nmax;i++)
	Removelist(a[i]);
	
}

void Check_Row(int k){
if(k<n){   
for(int i=0;i<n-4;i++){
	string x;
	x="";
	x+=s[k][i];
	for(int j=i+3;j<n;j++){
		x+=s[k][j];
		if(Check_Voca(x)) cout<<x<<endl;
	
	//	if(Check_Voca(strrev(s))) cout<<x<<endl;
	}
	}
Check_Row(k+1);
}
}

	
main(){
Init();
//Check_Row(0);
Finish(a);

}

