#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    double x;
    while(scanf("%lf",&x)!=EOF)
    {
        double sum=1.0, item=1.0;
        int i = 1;
        while(fabs(item) >=1e-8 )
        {
            item*=x/i;
            sum+=item;
            i++;
            cout << "item: " << item << ", sum: " << sum << endl;
        }
        printf("%.8lf\n",sum);
    }
    return 0;
}
