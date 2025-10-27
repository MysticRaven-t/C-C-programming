#include <bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
	while(true){
		bool allzero=true;
		for(int i=0;i<6;i++) cin>>a[i];
		for(int i=0;i<6;i++){
			if(a[i]!=0) allzero=false;
		}
		if(allzero) break;
		for(int i=0;i<6;i++){
			if(i>0)  cout<<" ";
			cout<<a[i];
		}
		puts("");
		for(int i=0;i<5;i++){
			int key=a[5];
			for(int i=4;i>=0;i--){
				a[i+1]=a[i];
			}
			a[0]=key;
			for(int i=0;i<6;i++){
				if(i>0)  cout<<" ";
				cout<<a[i];
			}
			cout<<endl;
		}
	}
	return 0;
}
