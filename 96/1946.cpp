#include <bits/stdc++.h> 
using namespace std;

int main()
{
	while(true)
	{
		char c;
		cin>>c;
		if(c=='@')
		break;
		else 
		{
			int n;
			cin>>n;
			for(int i=1;i<=n;i++)
			{
				if(i<n)
				{	
					int sum=-1;
					sum++;
					for(int j=1;j<=n-1+i;j++)
					{
						if(j==n-1+i || j==n-1-sum)
						cout<<c;
						else 
						cout<<' ';
					}
				}
				if(i==n)
				{	for(int t=1;t<=n-1+i;t++)
					{	cout<<c;
					}
				}
				cout<<endl;
			}	
		}
		cout<<endl;
	}
	return 0;	
}
