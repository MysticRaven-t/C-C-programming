#include<iostream>
#include<string>
using namespace std;
string s;
int main()
{
	while(getline(cin,s)){
		if(cin.eof())
			break;
		int len=s.length();
		for(int i=0;i<len;i++){
			if(s[i]>='a' && s[i]<='z'){
				s[i]=s[i]-'a'+'1';	
			}
			else if(s[i]>='A' && s[i]<='Z'){
				s[i]=s[i]-'A'+'27';
			}
			else
				continue;		
		}
		cout<<s<<endl;
	}
	
	return 0;
}
