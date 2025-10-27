#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,3,31,4,21};
	int *p=a;
	int n=sizeof(a)/sizeof(int); 
	int *q=&a[n-1];
	while(p<q) {
		swap(*p,*q);
		p++;
		q--;
	}
	p=a;
	for(int i=0;i<n;i++){
		cout<<*(p+i)<<" ";
		cout<<*(a+i)<<endl;
	}
	return 0;
 } 
