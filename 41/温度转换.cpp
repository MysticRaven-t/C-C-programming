#include <stdio.h>
using namespace std; 

int main() 
{
    int f;
    scanf("%d", &f);
    double c = 5.0 / 9.0 * (f - 32);
    printf("%.1lf\n", c);
    return 0;
}
