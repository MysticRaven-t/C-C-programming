#include<bits/stdc++.h>
using namespace std;

const int maxn=200;
int a[maxn];

int main()
{
	int T;
	cin>> T;
	while(T--){
		int m;
		cin>> m;
		for(int i=0;i<m;i++){
			cin>> a[i];
		}
		int min=a[0];
		for(int i=0;i<m;i++){
			if(min>a[i])
				min=a[i];
		}
		cout<<min<<endl;	
	} 
	return 0;	
} 
