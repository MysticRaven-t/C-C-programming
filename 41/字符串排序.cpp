#include<bits/stdc++.h>
using namespace std;
struct str{
	string s;
}a[110];
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a[i].s;
	}
	for(int i=0;i<t-1;i++){
		for(int j=i+1;j<t;j++){
			if(a[j].s<a[i].s) swap(a[i],a[j]);
		}
	}
	for(int i=0;i<t;i++){
		cout<<a[i].s<<endl;
	}
	return 0;
} 
