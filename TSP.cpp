	#include<bits/stdc++.h>
	#define Nmax 16
	long m;
	long s,d,Min;
	int n,a[Nmax][Nmax],b[Nmax];
	short int kt[Nmax];
	using namespace std;
	void Init(){
		Min=Nmax;
	freopen("int.txt","r",stdin);
		cin>>n>>m;
			for(int	i=1;i<=n;i++)
				for(int j=1;j<=n;j++){
			
					cin>>a[i][j];
					if(a[i][j]!=0 ) Min=a[i][j]>Min?Min:a[i][j];
				}
	}
	
	void Try(int i){
		for(int j=2;j<=n;j++)
			if(s+a[b[i-1]][j]<=m-(n-i)*Min and kt[j]==0){
				kt[j]=1;
				s+=a[b[i-1]][j];
				b[i]=j;
				if(i==n and s+a[b[i]][1]<=m) d++;else Try(i+1);
				kt[j]=0;
				s-=a[b[i-1]][j];
			}
	}
	
	main(){
	Init();
	b[1]=1;
	
	Try(2);
	cout<<d;
	}

