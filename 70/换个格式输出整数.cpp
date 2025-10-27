#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,digit,ge,shi,bai;
	cin>>n;
	int cnt=0;
	while(n>0){
		digit=n%10;
		cnt++;
		if(cnt==1){
			ge=digit;
		}
		else if(cnt==2){
			shi=digit;
		}
		else if(cnt==3){
			bai=digit;
		}
		n/=10;	
	}
	while(cnt>0){
		if(cnt==3){
			for(int i=1;i<=bai;i++){
				cout<<"B";
			}
			cnt--;
		}
		else if(cnt==2){
			for(int i=1;i<=shi;i++){
				cout<<"S";
			}
			cnt--;
		}
		else if(cnt==1){
			for(int i=1;i<=ge;i++){
				cout<<i;
			}
			cnt--;
		}
	}
	cout<<endl;
	return 0;
}
