#include<bits/stdc++.h>
using namespace std;
string s1;
string s2;
int main()
{
	int n;
	cin>>n;
	getchar(); 
	while(n--){
		getline(cin,s1);
		getline(cin,s2);
		s1+=s2;
		cout<<"The new string is: "<<s1<<endl; 
	}
	return 0;
}
