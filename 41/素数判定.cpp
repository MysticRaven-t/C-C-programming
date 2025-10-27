#include<bits/stdc++.h>
using namespace std;
bool isprime(int n);
int main()
{
	int x,y;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		if(x==0 && y==0)
		continue;
		else
		{
			int sum=0;
			int cnt=0;
			for(int i=x;i<=y;i++)
			{
				sum=i*i+i+41;
				if(isprime(sum))
				cnt++;
			}
			if(cnt==y-x+1)
			cout<<"OK"<<endl;
			else
			cout<<"Sorry"<<endl;
		}	
	}
	return 0;	
}
bool isprime(int n)
{
    if (n < 2) return false;
    if (n > 2 && n % 2 == 0) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}
