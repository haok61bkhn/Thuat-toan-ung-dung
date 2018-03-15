#include<bits/stdc++.h>
#define Nmax int(1e5)
using namespace std;
unsigned long a[Nmax];
int n,m;
void Init(){
//freopen("int.txt","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		{
		cin>>a[i];
		a[i]+=a[i-1];
		}
	

}

void Program(){
long d=0;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			if(a[j]-a[i-1]<=m) d++;else break;
	cout<<d;
}

main(){
Init();
Program();
}

