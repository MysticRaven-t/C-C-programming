#include<bits/stdc++.h>
using namespace std;
const int maxn=6;
int a[maxn]={0};
int main()
{
	while(true)
	{
		bool allzero=true;
		for(int i=0;i<=6;i++)
		{
			cin>>a[i];
			if(a[i]!=0)
			allzero=false;
		}
		if(allzero)
		break;
		for(int i=0;i<6;i++)
		{
			for(int j=0;j<6;j++)
			{
				cout<<a[(j+i)%6]<<" ";
			}
			cout<<endl;
		}

		cout<<endl;
	}

	return 0;
 } 
