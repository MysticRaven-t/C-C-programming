#include<bits/stdc++.h>
using namespace std;
const int maxn=1000;
int a[maxn];
int main()
{
	int n,flag,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>flag;
	k=0;
	for(int i=0;i<n;i++){
		if(a[i]==flag) k=i;
	}
	cout<<k<<endl;
	return 0;
}
