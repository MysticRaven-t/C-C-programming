#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	for(int i=1;i<=n/2+1;i++){
		for(int j=i;j<=n/2;j++){
			cout<<'-';
		}
		for(int k=1;k<=2*i-1;k++){
			cout<<'*';
		}
		for(int t=i;t<=n/2;t++){
			cout<<'-';
		}
		cout<<endl; 
	}
	for(int i=1;i<=n/2;i++){
		for(int j=1;j<=i;j++){
			cout<<'-';
		}
		for(int k=1;k<=n-2*i;k++){
			cout<<'*';
		}
		for(int t=1;t<=i;t++){
			cout<<'-';
		}
		cout<<endl;	
	}

	return 0;
 } 
