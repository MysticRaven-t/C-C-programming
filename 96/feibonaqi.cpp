#include<bits/stdc++.h>
using namespace std;
const int maxn=50;
long long f[maxn];
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		f[1]=1;
		f[2]=1;
		for(int i=3;i<=a;i++)
		{
			f[i]=f[i-1]+f[i-2];
		}
		cout<<f[a]<<endl;
	}
	
	
	
	return 0; 
}
