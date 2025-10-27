#include<bits/stdc++.h>
using namespace std;
const int N=10;
int a[N];
int main()
{
	int n,t;
	cin>> n;
	for(int i=0;i<n;i++){
		cin>> a[i];
	} 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
 } 
