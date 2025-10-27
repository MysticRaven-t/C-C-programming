#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>> T;
	while(T--)
	{
		int m,sum;
		cin>> m;
		sum=0;
		for(int i=1;i<=m;i++)
		{
			int a;
			cin>> a;
			sum+=a;
		}	
	cout<<sum<<endl;
	}
	return 0;
}
