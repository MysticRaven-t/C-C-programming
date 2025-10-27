#include<bits/stdc++.h>
using namespace std;
int a[300] = {0};
int main()
{
    int n,m;
    while(cin>>n>>m && (n!=0 && m!=0)){
        for(int i = 1;i<=n;i++) a[i]=0;
        int cnt = 0;
        int i = 1;
        int k = 0;
        while(cnt < n - 1){
            if(a[i]==0){
                k++;
                if(k == m){
                    a[i]=1;
                    cnt++;
                    k = 0;
                }
            }
            i++;
            if(i>n) i = 1;
        }
        for(int j = 1;j<=n;j++){
            if(a[j]==0){
                cout<<j<<endl;
                break;
            }
        }
    }
    return 0;
}
