#include <bits/stdc++.h>
using namespace std;
int a[10]={1,2,3,4,5,7,8,33,42,11};
bool cmp(int a,int b){
	return a>b;
} 
int main()
{
	sort(a,a+10,cmp);
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
