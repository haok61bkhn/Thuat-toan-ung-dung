#include<bits/stdc++.h>
#define Nmax int(1e2)
#define oo int(1e2)//
using namespace std;
bool kt[Nmax],f,l,n;
int a[Nmax][Nmax];
int trace[Nmax],d[Nmax];

void Init(){

freopen("int.txt","r",stdin);
int m,x,y,z;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		scanf("%d",&x);
		scanf("%d%d",&y,&z);
		a[x][y]=z;
		a[y][x]=z;
	
	}
	scanf("%d%d",&f,&l);
	for(int i=1;i<=n;i++)
		{ d[i]=a[f][i];
		  if(a[f][i]==0) d[i]=oo;
		}
	kt[f]=true;
	
}
//=======================
void Output(){
int b[Nmax];
int k=0;	
	cout<<d[l]<<endl;
	while(l!=f){
		b[k]=l;
		k++;
		l=trace[l];
	}
	cout<<f<<" ";
	for(int i=k-1;i>=0;i--)
		cout<<b[k]<<" ";
		exit(0);
}
void Dijkstra(int f,int l,int s){
	for(int i=1;i<=n;i++){
	if(kt[i]==false and d[i]<a[s][i]+d[s])
		d[i]=a[s][i]+d[s];		
	}
	int Min=oo;
	int t;
	for(int i=1;i<=n;i++)
		if(kt[i]==false and d[i]<Min){
			Min=d[i];
			t=i;
		}
	if(Min==oo){
		cout<<-1;exit(0);
	}
	else{
		kt[s]=true;
		trace[t]=s;
		if(s==l) Output();else
		Dijkstra(f,l,t);
	}
}

main(){
Init();
Dijkstra(f,l,f);
}

