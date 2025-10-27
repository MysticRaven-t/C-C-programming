#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x1,y1,x2,y2;
	double d,t,sum;
	cin>>x1>>y1>>x2>>y2;
	d=(x1-x2)*(x1-x2);
	t=(y1-y2)*(y1-y2);
	sum=d+t;
	cout<<setprecision(2)<<fixed<<sqrt(sum)<<endl;
	return 0;
 } 
