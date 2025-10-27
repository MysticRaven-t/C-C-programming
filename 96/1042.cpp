#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cin>>n;
		
		int sum1=0,sum2=0;
		
		for(int i=0;i<n;++i)
		{	int num;
			cin>>num;
			
			if(num%2==0)
			{	
				sum2+=num;
			}
			else{
				sum1+=num;	
			}
			
		}	
		cout<<sum1<<' '<<sum2<<'\n';
	}
		
	return 0;
}
