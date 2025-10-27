#include <bits/stdc++.h>
using namespace std;

int main()
{
	char x;
	int y,a,b,sum;
	cin>> x >>y;
	
	if(x>='A' && x<='Z')
	{
		a=x-64;
		sum=a+y;
	}
	else if(x>='a' && x<='z')
	{
		b=96-x;;
		sum=b+y;	
	}
	
	printf("%d\n",sum);
	
	return 0;
 } 
 
