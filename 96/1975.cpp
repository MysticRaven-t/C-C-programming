#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,c;
		cin>>n;
		a=n%10;
		b=n/10%10;
		c=n/100%10;
		cout<<c<<" "<<b<<" "<<a<<endl;	
		
	}
	return 0;
	
}
