#include<bits/stdc++.h>
using namespace std;

const int maxn=20;
int arr[maxn];

int main()
{
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	int h,cnt;
	cin>>h; 
	cnt=0;
	for(int i=0;i<10;i++){
		if(h+30>=arr[i])
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
 } 
