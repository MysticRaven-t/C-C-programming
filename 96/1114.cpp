#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,m;
	cin>>a>>b;
	while((m=a%b)!=0){
		a=b;
		b=m;
		
	}
	cout<<b<<endl;
	return 0;
}
