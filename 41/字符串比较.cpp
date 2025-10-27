#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int i,cmp,t;
	cin>>t;
	getchar();
	while(t--){
		getline(cin,s1);
		getline(cin,s2);
		i=0;
		while(s1[i]==s2[i] && s1[i]!='\0') i++;
		cmp=s1[i]-s2[i];
		cout<<cmp<<endl;
	}
	return 0;
} 
