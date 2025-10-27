#include<bits/stdc++.h>
using namespace std;
const int N=100;
char c[N]; 
int main() 
{
	int n=0;
	while(1)
	{
		c[n]=getchar();
		if(c[n]=='\n')
			break;
		n++;	
	}
	for(int i=0;i<=n;i++)
	{
		if(c[i]>='A' && c[i]<='Z')
			{
				cout<<c[i]<<" ";
			}
		else
			continue;
	}
	cout<<endl;
	return 0;
 }
