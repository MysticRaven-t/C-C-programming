#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	cin>> ch;
	for(int i=1;i<=4;i++) 
	{
		for(int j=1;j<=4;j++)
		{
			if(i==1 ||i==4)
			cout<<ch;
			if(i==2 ||i==3)
			{
				if(j==2 ||j==3)
				cout<<" ";
				else
				cout<<ch;
			}
		}
		cout<<endl;
	}
	cout<<endl;
	
}
