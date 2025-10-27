#include <bits/stdc++.h>
using namespace std;
const int N=200;
int a[N];
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int l=0,h=n-1;
	int mid=(l+h)/2;
	cin>>m;
	bool found=false;
	while(l<=h){
		if(a[mid]==m){
			found=true;
			cout<<mid<<endl;
			break; 
		}
		else if(a[mid]>m){
			h=mid-1;
		}
		else{
			l=mid+1; 
		}
		mid=(h+l)/2;
	}
	if(!found) cout<<"-1\n";
	return 0;
}
