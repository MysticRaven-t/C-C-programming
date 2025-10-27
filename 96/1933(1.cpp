#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		if(a==0) cout<<0;
		else
		{
		cin>>a;
		int digitcount=0; //存储整数a的位数
		int temp=a;
		while(temp>0)
		{
			temp/=10;
			digitcount++;
		}
		temp=a;
		for(int i=0;i<digitcount;i++)
		{
			cout<<temp%10<<" ";
			temp/=10;
		}
		 cout<<endl;
		}
	}
	return 0;
 } 
