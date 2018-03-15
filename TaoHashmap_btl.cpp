 #include<bits/stdc++.h>
 #include<string>
using namespace std;
string c[19][1009];
int Hashmap2(string s){
int sum=0;
	for(int i=0;i<s.length();i++)
		sum+=(s[i]-96)*i;
	return sum%109;
	
}
int Hashmap1(string s){
int sum=0;
	for(int i=0;i<s.length();i++)
		sum+=(s[i]-96)*(s[i]-96)*i;
	return sum%109;
}
void Init(){
	string x;
//ifstream cin("dictionary.txt");
//	while(cin.eof()){
//		cin>>x;
//		if(c[Hashmap1(x)][Hashmap2(x)]!="") cout<<c[Hashmap1(x)][Hashmap2(x)];
//		c[Hashmap1(x)][Hashmap2(x)]=x;
//		
//	}
//	cout<<1;
}

main(){
Init();
}

