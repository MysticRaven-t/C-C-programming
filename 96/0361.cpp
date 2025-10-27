#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a, b, c, sum, j;
        sum = 0;
        cin>>a>>b>>c;
        sum = a + b + c;
        j = a * b * c;
        int min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        cout<<sum<<" "<<sum/3<<" "<<j<<" "<<min<<" "<<max<<endl;
    }
    return 0;
}
