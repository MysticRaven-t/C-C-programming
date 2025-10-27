#include<bits/stdc++.h>
using namespace std;

int issky(int n, int th)
{
	int c, sum;
	sum = 0;
	while(n > 0)
	{
	c = n % th;
	sum = sum + c;
	n = n / th;
	}
	
	return sum;
}
int main()
{
	int n, s, th;
	scanf("%d",&n);
	while(n --)
	{
		scanf("%d", &s);
	if(issky(s,10) == issky(s,12) && issky(s,10) == issky(s,16))
		printf("%d is a Sky Number.\n",s);
		else
		printf("%d is not a Sky Number.\n",s);
		
	}
	return 0;
}
