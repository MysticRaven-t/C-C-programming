#include <bits/stdc++.h>
using namespace std;
const int maxn=10001;
int a[maxn];

int main()
{
	int n,m,k;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0) break;
		else{
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
			if(a[n-1]<m) a[n]=m;
			else{
				for(int i=0;i<n;i++){
					if(a[i]>m){
						k=i;
						break;
					}
				}
				for(int i=n-1;i>=k;i--){
					a[i+1]=a[i];
				}
				a[k]=m;
			}
			for(int i=0;i<=n;i++){
				if(i!=0) cout<<" ";
				cout<<a[i];
			}
			cout<<endl;	
		} 
	}

	return 0;
}
