#include<bits/stdc++.h>
using namespace std;
const int maxn = 100;
int f[maxn];
int main()
{
    int n,m;
    while (true)
    {
        cin>>n>>m;
        if (n == 0 && m == 0)
            break;
        else
        {
            for (int i = 0; i < n; i++)
            {
                cin>>f[i];
            }
            int s = 0;
            while (s < n && f[s]<m)
            {
                s++;
            }
            for (int i = n; i > s; i--)
            {
                f[i]=f[i - 1];
            }
            f[s]=m;
            for (int i = 0; i <= n; i++)
            {
                cout<<f[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
