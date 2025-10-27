#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt;
	cin >> n;
	cnt=0;
	while(n>1){
		if(n%2==0){
			n/=2;
			cnt++;
		}
		else{
			n=(3*n+1)/2;
			cnt++;
		}
	}
	cout << cnt << endl; 
	return 0;
} 
