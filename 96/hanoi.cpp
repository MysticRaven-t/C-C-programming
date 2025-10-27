#include<bits/stdc++.h>
using namespace std;

void hanoi(int n,int a, int b,int c)
{
	if(n==1)
	cout<<n<<":"<<a<<"--->"<<b<<endl;
	else
	{
	hanoi(n-1,a,c,b);
	cout<<n<<":"<<a<<"--->"<<b<<endl;
	hanoi(n-1,c,b,a);
	}
}


int main()
{
	int n=3;
	hanoi(n,1,2,3);
	return 0;	
 } 
