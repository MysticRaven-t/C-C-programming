#include <bits/stdc++.h>
using namespace std;
const int N=300;
int a[N];
int main()
{
	int n,m;
	while(cin>>n>>m&&(n!=0&&m!=0)){
		for(int i=1;i<=n;i++) a[i]=0;
		int i=1,cnt,k;
		cnt=0;
		k=0;
		while(cnt!=n-1){
			if(a[i]==0){
				k++;
				if(k==m){
					a[i]=1;
					cnt++;
					k=0;
				}
			}
			i++;
			if(i>n) i=1;
		}
		for(int i=1;i<=n;i++){
			if(a[i]==0) cout<<i<<endl;
		}
	}
	return 0;
 } 
