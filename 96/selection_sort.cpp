#include<bits/stdc++.h>
using namespace std;

const int maxn=1110;
int a[maxn];

int main()
{						//从大到小 
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int key=i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[key]){
				key=j;
			}
		}
		swap(a[i],a[key]);
	}
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
