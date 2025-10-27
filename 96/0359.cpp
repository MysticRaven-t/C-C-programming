#include <bits/stdc++.h>
using namespace std;

bool isprime(int a)
{
	if(a<1 && a=1) return false;
	else
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0) return false;
		else return true;
	}
}

int main()
{
	
	return 0;
 } 
