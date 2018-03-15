#include<bits/stdc++.h>
#include<queue>

using namespace std;
int xl,yl,xf,yf;
int n;
queue< pair<int,int> > Que;
int **A;

void Alloc_array(int **&A,int n)
{	A=new int*[n];
	for(int i=0;i<n;i++)
		 A[i]=new int[n];
		
	if (*
 A==NULL) cout<<"Cap phat that bai"<<"\n";
		
}
void Del_array(int ***A){
	
	for(int i=0;i<n;i++)
		delete []A[i];
	delete []A;
	if(**A!=NULL) cout<<"giai phong that bai"<<"\n";
	
	
}



void  Init(){
//	freopen("int.txt","r",stdin);
	cout<<"Nhap do dai canh me cung"<<endl;
	cin>>n;
	Alloc_array(A,n);
	
	srand(time(NULL));
	A[1][1]=1;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			A[i][j]=rand()%2;
	for(int i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		cout<<A[i][j]<<" ";
		cout<<endl;
		}
		
			
			
	cout<<"Nhap toa do diem bat dau"<<endl;
	cin>>xf>>yf;
	cout<<"Nhap toa do diem thoat me cung"<<endl;
	cout<<xl<<yl;
}

void Bff(){
   Que.push(make_pair(xf,yf));

   while(!Que.empty()){
   		
   }
}


main(){
Init();
}

