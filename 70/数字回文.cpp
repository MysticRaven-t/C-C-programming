#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		for(int j=len;i>0;j--){
			if(s[i]==s[j]){
				cout<<"Yes."<<endl;
			}
			else{
				cout<<"No."<<endl; 
			}
		}
	}
	
}
