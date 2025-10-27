#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x;
	int n;
	cin>> x>> n;
	double t=1.0;
	for(int i=1;i<=n;i++)
	{
		t*=x;
	}
	cout<<setprecision(3)<<fixed<<t<<endl;
	return 0;	
}
