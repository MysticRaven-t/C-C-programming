#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>> T;
	while(T--){
		int n;
		cin>> n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<"*";
			}
			for(int k=1;k<=n-i+1;k++){
				cout<<"-";
			}
			for(int jj=1;jj<=n-i+1;jj++){
				cout<<"*";
			}
			for(int kk=1;kk<=i-1;kk++){
				cout<<"-";
			}
			cout<<endl;		
		}	
	}
	return 0;
}
