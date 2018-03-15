#include<bits/stdc++.h>
#define Nmax int(1e4)
using namespace std;
int a[Nmax],n;
void  Init(){
//	freopen("int.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];

}

void  Output(){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
}
 
void  Program(){
	bool kt=false;
	int i,k;
	while(kt==false){
		for(i=n-2;i>0;i--) {
		if(a[i]<a[i+1]) break;
	}
		if(i==-1){
			cout<<-1; exit(0);
		}
		
		else{
		for(k=n-1;k>0;k--)
			if(a[k]>a[i]) {swap(a[k],a[i]);break;}
			sort(a+i+1,a+n);
			Output();kt=true;
		}
	}
}
main(){
Init();
Program();
}

