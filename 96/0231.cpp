#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k,sum=1;
	cin>>k;
	for(int i=2;i<=k;i++)
	{
		int t;
		t=i*i*i;
		sum+=t;
	}
	cout<<sum<<endl;
	return 0;
 } 
