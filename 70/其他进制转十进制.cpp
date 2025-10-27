#include <bits/stdc++.h>
using namespace std;
int trans(int th,string s){
	int sum=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='9'){
			sum=sum*th+s[i]-'0';
		}
		else sum=sum*th+s[i]-'A'+10;
	}
	return sum;
}
int main()
{
	int th;
	string s;
	cin>>th>>s;
	cout<<trans(th,s)<<endl;	
	return 0;
}
