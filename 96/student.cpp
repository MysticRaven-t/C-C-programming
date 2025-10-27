#include<bits/stdc++.h>
using namespace std;
struct student{
	string id;
	string name;
	char sex;
	int year;
	int month;
	int day;
	double Chinese;
	double math;
	double English;
}a;

double sumaverage(double a,double b,double c);
double add(double a,double b,double c);

int main()
{
	string s;
	while(1){
		cin>>s;
		if(s=="Insert"){
			cin>>a.id >>a.name >>a.sex >>a.year >>a.month >>a.day 
			>>a.Chinese >>a.math >>a.English;
			double average=sumaverage(a.Chinese,a.math,a.English);
			double sum=add(a.Chinese,a.math,a.English);
			cout<<"Insert:"<<endl<<a.id<<" "<<a.name<<" "<<a.sex<<" "<<a.year
			<<" "<<a.month<<" "<<a.day;
			printf(" %.1lf %.1lf %.1lf %.1lf %.1lf\n",a.Chinese,
			a.math,a.English,average,sum);
		}
		else if(s=="Quit" || s=="Exit"){
			cout<<"Good bye!"<<endl;
			break;
		}
	}
	return 0;
}
double sumaverage(double a,double b,double c){
	return (a+b+c)/3.0;
}
double add(double a,double b,double c){
	return a+b+c;
}
