#include<bits/stdc++.h>
using namespace std;
const int M = 300;
int a[M];
int s(int a[], int n)//求数组总和 
{
	int sum = 0;
	for(int i = 0; i < n; i ++)
	{
		sum += a[i];
	}
	return sum;
}
int main()
{
	int n, m, sum = 0;
	while(cin >> n >> m)
	{
		if(n == 0 && m == 0) break;
		for(int i = 0; i < n; i ++) //设置每个为1 
		{
			a[i] = 1;
		}
		int i = 0;
	    while(s(a, n) > 1)//数组总和为1时退出 
	    {
		    sum += a[i];
		    if(sum == m)
		    {
		    	sum = 0;
		    	a[i] = 0;
			}
		    i = (i + 1) % n;//数组下标循环 
		}
		for(int i = 0; i < n; i ++)
		{
			if(a[i] == 1) printf("%d\n", i + 1);
		}
	}
	
	return 0;
} 


