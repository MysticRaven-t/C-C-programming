#include <bits/stdc++.h>
using namespace std;
int two(int a)
{
    int result = 0;
    int multiplier = 1;
    while (a>0)
    {
        int b = a % 2;
        a /= 2;
        result += b * multiplier;
        multiplier *= 10;
    }
    return result;
}
int main()
{
    int n;
    while (cin>>n)
    {
        cout<<two(n)<<endl;
    }
    return 0;
}
