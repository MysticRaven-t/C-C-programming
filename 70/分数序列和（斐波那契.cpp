#include<bits/stdc++.h>
using namespace std;
const int maxn=200;
 
int Fibonacci(int a);

int main()
{
	int n;
	double sum;
	cin>> n;
	sum=0;
	for(int i=1;i<=n;i++)
	{
		sum+=1.0*Fibonacci(i+2)/Fibonacci(i+1);
	}
	printf("%.4lf\n",sum);
	return 0;
 } 
int Fibonacci(int a)
{
	int f[maxn];
	f[1]=1;
	f[2]=1;
	for(int i=3;i<=a;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	return f[a];
}
