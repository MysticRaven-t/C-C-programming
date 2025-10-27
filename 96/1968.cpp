#include<bits/stdc++.h>
#include <climits>
using namespace std;
const int maxn = 100;
int a[maxn];
int main()
   {
       int T;
       cin>>T;
       while(T--)
       {
           int m;
           cin>>m;
           int max_n = INT_MIN;
           for(int i = 0; i<m; i++)
           {
               int n;
               cin>>n;
               a[i]=n;
               if(a[i]>max_n)
                   max_n = a[i];
           }
           cout<<max_n<<endl;
		}
       return 0;
}
