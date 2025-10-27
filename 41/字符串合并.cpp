#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,add;
	getline(cin,s); 
	getline(cin,t);
	add=s+t;
	for(int i=0;i<add.size()-1;i++){
		for(int j=i+1;j<add.size();j++){
			if(add[j]<add[i]){
				swap(add[i],add[j]);
			}
		}
	}
	cout<<add<<endl;
	return 0;
}
