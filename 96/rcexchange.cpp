#include<bits/stdc++.h>
using namespace std;
const int maxn = 100;
int f[maxn][maxn];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a, b;
        cin>>a>>b;
        for(int i = 1; i <= a; i++)
        {
            for(int j = 1; j <= b; j++)
            {
                cin>>f[i][j];
            }
        }
        for(int i = 1; i <= b; i++)
        {
            for(int j = 1; j <= a; j++)
            {
                cout<<f[j][i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
