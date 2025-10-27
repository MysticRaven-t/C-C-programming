#include<bits/stdc++.h>
using namespace std;
const int maxn=200;
int a[maxn];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum;
		double x;
		sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
		}
		x=1.0*sum/n;
		double sum_1=0;
		for(int i=0;i<n;i++)
		{
			sum_1+=(a[i]-x)*(a[i]-x);
		}
		double e;
		e=sqrt(sum_1/n);
		cout<<setprecision(3)<<fixed<<x<<" "<<e<<endl;
	}
	return 0;
 } 
