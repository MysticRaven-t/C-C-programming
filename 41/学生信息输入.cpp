#include<bits/stdc++.h>
using namespace std;
struct student{
	string id;
	string name;
	char sex;
	double Chinese;
	double math;
	double English;
}a;
double sumaverage(double a,double b,double c);
double add(double a,double b,double c);
int main()
{
	cin>>a.id>>a.name>>a.sex>>a.Chinese>>a.math>>a.English;
	double average=sumaverage(a.Chinese,a.math,a.English);
	double sum=add(a.Chinese,a.math,a.English);
	cout<<a.id<<" "<<a.name<<" "<<a.sex;
	printf(" %.2lf %.2lf %.2lf %.2lf %.2lf\n",a.Chinese,
	a.math,a.English,average,sum);
	return 0;
}
double sumaverage(double a,double b,double c){
	return (a+b+c)/3.0;
}
double add(double a,double b,double c){
	return a+b+c;
}
