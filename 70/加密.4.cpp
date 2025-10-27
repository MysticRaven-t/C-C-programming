#include<bits/stdc++.h>
using namespace std;
int tong(int n);
int main()
{
	for(int i=1;i<100;i++){
		if(i==tong(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	
	return 0;
 }
int tong(int n){
	int cnt,s,number,rest;
	s=n;
	cnt=0;
	while(s!=0){
		s/=10;
		cnt++;
	}
	number=pow(10,cnt);
	rest=n*n%number;
	return rest;
}
