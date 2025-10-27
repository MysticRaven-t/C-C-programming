#include<bits/stdc++.h>
using namespace std;
#define maxn 100
int arr[maxn]={0};

int main()
{
	int n;
	cin>> n;
	for(int i=0;i<n;i++){
		cin >>arr[i];	
	}
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[j-1])
			{
				int temp=arr[j];
				arr[j]=arr[j-1]; //可能会有问题 
				arr[j-1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
