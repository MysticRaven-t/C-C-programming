#include <stdio.h>

int main() 
{
    double a, b, c, s;
    
    scanf("%lf %lf %lf",&a ,&b, &c);
    
    s =( a+ b) * c / 2.0 ;
    
    printf("%.2lf\n",s);
    
    return 0;
}
