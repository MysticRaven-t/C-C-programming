#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[5];
	for(int i=1;i<=3;i++) cin>>a[i];
	sort(a+1,a+4); 
	if(a[1]+a[2]<=a[3]||a[3]-a[1]>=a[2]) cout<<"Not triangle\n";
	else{
		if(a[1]*a[1]+a[2]*a[2]==a[3]*a[3]) cout<<"Right triangle\n";
		else if(a[1]*a[1]+a[2]*a[2]>a[3]*a[3]) cout<<"Acute triangle\n";
		else if(a[1]*a[1]+a[2]*a[2]<a[3]*a[3]) cout<<"Obtuse triangle\n";
		if(a[1]==a[2]||a[1]==a[3]||a[2]==a[3]){
			cout<<"Isosceles triangle\n";		
			if(a[1]==a[2]&&a[1]==a[3]&&a[2]==a[3]) cout<<"Equilateral triangle\n";
		}
	}
	return 0;
}
