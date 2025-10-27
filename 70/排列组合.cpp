#include<bits/stdc++.h>
using namespace std;
int arrange(int a){
	int A=1;
	for(int i=a;i>0;i--){
		A*=i;
	}
	return A;
}
int combination(int n,int m){
	return arrange(n)/arrange(m);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<combination(n,m)<<endl;
	}
} 
