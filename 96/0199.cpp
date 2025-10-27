#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a=1;
	double PI=1;
	for(int i=1;i<200;i+=2)
	{
	a*=((double)(i+1)/i)*((double)(i+1)/(i+2));
	PI=2*a;
	}
	cout<<fixed<<setprecision(3)<<PI<<endl;
	return 0;
}
