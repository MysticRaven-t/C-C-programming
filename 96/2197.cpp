#include<bits/stdc++.h>
using namespace std;
const int maxn = 100;
int a[maxn];
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int e;
        cin>>e;
        a[i]=e;
    }
    int t;
    cin>>t;
    bool found = false;
    for(int i = 0;i < n;i++)
    {
        if(a[i]==t)
        {
            cout<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
