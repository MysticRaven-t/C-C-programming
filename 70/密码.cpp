#include<bits/stdc++.h>
using namespace std;
bool xiaoxie(string s);
bool daxie(string s);
bool number(string s);
bool special(string s);
string s;
int main()
{
	int M;
	cin>> M;
	while(M--){
		cin>>s;
		int len=s.length();
		if(len<8 || len>16){
			cout<<"NO"<<endl;
			continue;
		}
		int count = 0;
		if (xiaoxie(s)) count++;
		if (daxie(s)) count++;
		if (number(s)) count++;
		if (special(s)) count++;
		if (count >= 3)
    	cout << "YES" << endl;
		else
    	cout << "NO" << endl;
	}	
	return 0; 
}
bool xiaoxie(string s){
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='a' && s[i]<='z')
		return true;
	}
	return false;
}
bool daxie(string s){
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='A' && s[i]<='Z')
		return true;
	}
	return false;
}
bool number(string s){
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='0' && s[i]<='9')
		return true;
	}
	return false;
}
bool special(string s){
	int len=s.length();
	for(int i=0;i<len;i++){
		if((s[i]=='~')||(s[i]=='!')||(s[i]=='@')||(s[i]=='#')
		||(s[i]=='$')||(s[i]=='%')||(s[i]=='^'))
		return true;
	}
	return false;
}
