#include<bits/stdc++.h>
using namespace std;

void digit(int n);
 
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		digit(n);
		cout<<endl;
	}
	return 0;
}

void digit(int n){
	int cnt=0;
	while(n!=0){
		cout<<n%10;
		n/=10;
		cnt++;
	}
	cout<<" "<<cnt;
	return;
	
}
