#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c,d,e,f,g;
	
	cin >> a >> b >> c;
	d=b*b-4*a*c;
	
	if(d<0)
	printf("no\n");
	
	else if(d==0)
	printf("%.2lf\n",-b/(a*2));
	
    else
	{e=sqrt(d);
    f=(-b+e)/(2*a);
	g=(-b-e)/(2*a);
	printf("%.2lf %.2lf\n",f,g);}
	
	return 0;
}
 
