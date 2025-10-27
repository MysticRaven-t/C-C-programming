#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int a[maxn];
int main()
{
	int n,m,i=0;
	while(cin>>n>>m){
		a[i]=m*n;
		a[i+1]=m-1;
		if(a[i]==0&&a[i+1]==-1)
			continue;
		else i+=2;
	}
	for(int j=0;j<i;j++){
		if(j!=0) cout<<" ";
		cout<<a[j];
	}
	if(i<1) cout<<"0 0";
	cout<<endl;
	return 0;	
} 
