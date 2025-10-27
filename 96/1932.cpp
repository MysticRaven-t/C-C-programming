#include <bits/stdc++.h> 
using namespace std;

int main()
{
	double x,d=0;
	int n,i;
	
	cin>>x>>n;
	
	d+=x;
	
	for(i=1;i<n;i++)
		{x/=2;
		d+=x*2;
		}
		
	cout<<setprecision(6)<<fixed<<d<<endl;

	return 0;
}
