#include <bits/stdc++.h>
using namespace std;
const int N=110;
int a[N];
int main()
{
	int n,m,k;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	if(m>=a[n-1]) a[n]=m;
	else {
		for(int i=0;i<n;i++){
			if(a[i]>=m){
				k=i;
				break;
			}
		}
		for(int i=n;i>k;i--){
			a[i]=a[i-1];
		}
		a[k]=m;	
	}
	for(int i=0;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}
