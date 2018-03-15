#include<bits/stdc++.h>
#define Nmax int(1e2)
#define oo int(1e5)//
using namespace std;
bool kt[Nmax];
int f,l,n;
int a[Nmax][Nmax];
int trace[Nmax],d[Nmax];

void Init(){
int m,x,y,z;
freopen("int.txt","r",stdin);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d%d",&x,&y,&z);
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
	
	while(l!=f){
		b[k]=l;
		k++;
		l=trace[l];
	}
	cout<<f<<" ";
	for(int i=k-1;i>=0;i--)
		printf("%d ",b[i]);
		exit(0);
}
void Dijkstra(int f,int l,int s){
	for(int i=1;i<=n;i++){
	if(kt[i]==false and d[i]>a[s][i]+d[s])
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

