#include<bits/stdc++.h  >
using namespace std;
const int maxn=1100;
int a[maxn];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<a[i];
	}
	cout<<endl;
	return 0;
} 
