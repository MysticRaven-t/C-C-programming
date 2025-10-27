#include <bits/stdc++.h> 
using namespace std;

int main()
{
	double x, y;
	
	scanf("%lf", &x) ;
	
	if(-5<=x && x<0)
		y =8/(x*x+x+1);
	else if(0<=x && x<5)
		y =7/(x*x+x+1);
	else if(5<=x && x<10)
		y=2/(x+8);
	else
		y =0;
	
	printf("%.3lf\n",y);
	
	return 0;
}
