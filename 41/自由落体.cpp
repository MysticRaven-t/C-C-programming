#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,sum;
	int n,i;
	cin>> x>>n;
	sum=x;
	double h=x;
	for(i=1;i<n;i++)
	{
		h/=2;
		sum+=2*h;
	}
	printf("%.6lf\n",sum); 
	
	return 0;
}
