#include<bits/stdc++.h>
using namespace std;
char s[50];
int main()
{
	int T;
	cin>>T;
	while(T--){
		scanf("%s",s);
		int i=0;
		int sum=0;
		int len=strlen(s);
		while(s[i]!='\0'){
			sum+=(s[i]-'0')*pow(2,len-i-1);
			i++;
		}
		cout<<sum<<endl;	
	}
	return 0;
 } 
