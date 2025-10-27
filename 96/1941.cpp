#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	long int sum=0,f=1;
	
	cin>>a>>b;
	
	for(int i=1;i<a;i++){
		
		f*=i;
	}
	for(int i=a;i<=b;i++){
		
		f*=i;
		sum+=f;
	}
	
	cout<<sum<<endl;
	
	return 0;
}
 
