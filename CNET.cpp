
#include<bits/stdc++.h>
#define Nmax int(1e4)
#include<list>
using namespace std;
list<int> a[Nmax] ;
int n,k,m,b[Nmax],s,p;
int kt[Nmax],Min,Min1;
void Init(){
Min1=Nmax;
freopen("int.txt","r",stdin);
int x,y,z;
	Min=Nmax;
	cin>>n>>k;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>x>>y>>z;
		a[x]. push_back(y);
		a[y].push_back(x);
		a[x].push_back(z);
		a[y].push_back(z);
		Min1=min(z,Min1);
		
	}
}

void Try(int i){
list<int>::iterator j = a[b[i-1]].begin();

	for(;j!=a[b[i-1]].end()-1;j++)
		if(s+va[*(j+1)][b[i-1]]<Min-Min1*(k-i) and kt[*(j+1)]!=p  ){
			j++;
			b[i]=*j;
			kt[*j]=p;
			s+=va[*j][b[i-1]];
			if(i==k) Min=s;else Try(i+1);
			j--;
			kt[*(j+1)]=-1;
			s-=va[*(j+1)][b[i-1]];
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
 
