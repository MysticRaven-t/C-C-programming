#include<bits/stdc++.h>
using namespace std;
const int N=10000010;
int arr[N];

void prime(int a[],int n);

int main()
{
	prime(arr,N);
	int a,b,cnt;
	cin>>a >> b;
	cnt=0;
	for(int i=a;i<=b-6;i++)
		if(!arr[i] && !arr[i+6])
		cnt++;
	cout<<cnt<<endl;
	return 0;
 }
void prime(int a[],int n)
{
	a[1]=1;
	for(int i=2;i<n/i;i++)
	{
		if(a[i]==0){
			for(int j=i+i;j<=n;j+=i)
			a[j]=1;
		}
	}
}
