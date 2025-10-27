#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	while(getline(cin,s))
	{
		if(cin.eof())
			break;
		int len=s.length();
		for(int i=0;i<len;i++){
			if(s[i]>='A' && s[i]<='Z'){
				s[i]=s[i]-'A'+'a';
			}
		}
		char max=s[0];
		for(int i=0;i<len;i++){
			if(max<s[i]){
				max=s[i];
			}
		}
		for(int i=0;i<len;i++){
			if(s[i]==max)
				cout<<s[i]<<"(max)";
			else
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
 } 
