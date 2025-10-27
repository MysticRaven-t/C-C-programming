#include<bits/stdc++.h>
using namespace std;
const int maxn=1010;
int a[maxn];
char c[maxn];
int main()
{
	int n;
	cin>>n;
	a[1]=2;a[2]=0;a[3]=1;a[4]=9;
	for(int i=5;i<=n;i++){
		a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4])%10;
	}
	for(int i=1;i<=n;i++){
		c[i]=a[i]+'0';
	}
	c[n+1]='\0';
	cout<<c+1<<endl; 
	return 0;
}
