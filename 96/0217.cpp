#include<bits/stdc++.h>
using namespace std;
const int maxn=10;
int a[maxn];
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int b,sum;
		cin>> b;
		for(int i=0;i<maxn;i++)
		{
			cin>> a[i];
			sum=0;
			if(a[i]>b)
			sum+=a[i];
		}
		cout<< sum <<endl;
	}
	
	return 0;
}
