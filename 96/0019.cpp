#include<bits/stdc++.h>
using namespace std;
const int M = 300;
int a[M];
int s(int a[], int n)//�������ܺ� 
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
		for(int i = 0; i < n; i ++) //����ÿ��Ϊ1 
		{
			a[i] = 1;
		}
		int i = 0;
	    while(s(a, n) > 1)//�����ܺ�Ϊ1ʱ�˳� 
	    {
		    sum += a[i];
		    if(sum == m)
		    {
		    	sum = 0;
		    	a[i] = 0;
			}
		    i = (i + 1) % n;//�����±�ѭ�� 
		}
		for(int i = 0; i < n; i ++)
		{
			if(a[i] == 1) printf("%d\n", i + 1);
		}
	}
	
	return 0;
} 


