#include<bits/stdc++.h>
#define Nmax int(1e5)
using namespace std;
unsigned long s;
long x;
int n;
void Init(){
//	freopen("int.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		s+=x;
		s=s% (1000000007);
		}
cout<<s;
	

}

main(){
Init();
}

