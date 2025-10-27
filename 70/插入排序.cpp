#include<bits/stdc++.h>
using namespace std;
const int N=200;
int a[N];
int main()
{
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>> n;
		for(int i=0;i<n;i++){
			cin>> a[i];
		}
		for(int i=1;i<n;i++){
			int t=a[i];
			int j=i-1;
			while(j>=0 && a[j]>t){
				a[j+1]=a[j];
				a[j]=t;
				j--;
			}
		}
		for(int i=0;i<n;i++){
			if(i==0)
			cout<<a[i];
			else
			cout<<" "<<a[i];
		}
		cout<<endl;
	}
	return 0;
 } 
