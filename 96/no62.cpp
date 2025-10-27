#include <bits/stdc++.h>	
using namespace std;	
double sale(int x)	
{
	if(x<=10000) return(1000+0.05*x);	
	else if(x>10000 && x<=50000) return(1000+0.075*x);	
	else if(x>50000&&x<=200000) return(1000+0.085*x);
	else if(x>200000) return(1000+0.1*x);
}

int main()
{
	int n;	
	cin>>n;	
	while(n--)	
	{
		int x;
		cin>>x;
		cout<<setprecision(3)<<fixed<<sale(x)<<endl;
	}
	return 0;	
}
