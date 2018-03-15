#include<bits/stdc++.h>
#define Nmax int(1e4)

using namespace std;
string a[7]={"red","green","yellow","blue","black","brown","white"};
int n,m,c[Nmax][Nmax],kt[Nmax],d=1;
int b[2*Nmax];
void Init(){
freopen("dothi.txt","r",stdin);
freopen("dothimau.txt","w",stdout);
int x,y;
int k=0;
	cout<<"graph dothi"<<endl;
	cout<<"{";
	
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		c[x][y]=1;
		c[y][x]=1;
		b[k]=x;
		k++;
		b[k]=y;
		k++;
		
		}
}


void Check(int x){
	if(x<=n and kt[x]==0){
		kt[x]=d;d++;
		for(int i=1;i<=n;i++)
			if(c[x][i]==0) kt[i]=kt[x];
			
			
	}
	if(x<n) Check(x+1);

}
main(){
Init();
cout<<endl;
Check(1);
for(int i=1;i<=n;i++)
	cout<<i<<"\t"<<" "<<"[fillcolor="<<a[kt[i]-1]<<", "<<"style=filled];"<<endl;
	for(int i=0;i<m;i++)
		cout<<"\t"<<b[i*2]<<" -- "<<b[i*2+1]<<";"<<endl;
	cout<<"}";
}

