#include<bits/stdc++.h>
using namespace std;
#define N 1000
int a[N];
int main()
{					//从大到小 
	int n;
	cin>>n;  
	for(int i=0;i<n;i++){  
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<a[i];
	}		
	cout<<endl;
	return 0;
} 
