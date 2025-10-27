#include<bits/stdc++.h>
using namespace std;
void digit(int n);
int main()
{
	int n;
	while(cin>> n)
	{
		if(n==0)
			break;
		else
			digit(n);
		cout<<endl;
	}
	return 0; 
 } 
void digit(int n)
{
	int cnt=0;
	while(n>0)
	{
		if(cnt<4) cout<<n%10<<"---";
		else cout<<n%10;
		n/=10;
		cnt++;
	}
}
