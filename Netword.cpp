
#include<bits/stdc++.h>
#define Nmax int(1e4)
#include<list>
using namespace std;
list<int> a[Nmax] ;
int va[Nmax][Nmax];
int n,k,m,b[Nmax],s,p;
int kt[Nmax],Min;
void Init(){
//freopen("int.txt","r",stdin);
int x,y,z;
	Min=Nmax;
	cin>>n>>k;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>x>>y>>z;
		a[x]. push_back(y);
		a[y].push_back(x);
		va[x][y]=va[y][x]=z;
		
	}
}

void Try(int i){
list<int>::iterator j = a[b[i-1]].begin();

	for(;j!=a[b[i-1]].end();j++)
		if(s+va[*j][b[i-1]]<Min and kt[*j]!=p){
			b[i]=*j;
			kt[*j]=p;
			s+=va[*j][b[i-1]];
			if(i==k) Min=s;else Try(i+1);
			kt[*j]=-1;
			s-=va[*j][b[i-1]];
		}
}

main(){
Init();
for(p=1;p<=n;p++){
	kt[p]=p;
	b[0]=p;
	s=0;
	Try(1);
}
cout<<Min;
}
 
