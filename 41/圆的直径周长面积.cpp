#include <stdio.h>
using namespace std;
 
int main() 
{
	const double pi=3.1415926;
	
	double r, d, c, s;
	
	scanf("%lf", &r);
	
	d =2.0 * r;
	c =2.0*pi*r;
	s =r*r*pi;
	
	printf("%.2lf %.2lf %.2lf\n", d, c, s);
    
    return 0;
}
