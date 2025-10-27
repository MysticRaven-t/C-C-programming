#include <bits/stdc++.h>
using namespace std;

int maxgy(int a, int b);
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int o,t;
		cin>>o>>t;
		cout<<maxgy(o,t)<<" "<<o*t/maxgy(o,t)<<endl;
	}
	return 0;
 }  
int maxgy(int a, int b)
{
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
