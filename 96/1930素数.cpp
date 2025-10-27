#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	int m;
	double sum=0.0;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		sum+=x;	
	}	
	cout<<fixed<<setprecision(2)<<sum/m<<endl;		
	}
	return 0;
 } 
