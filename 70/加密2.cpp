#include<bits/stdc++.h>
#define maxn 50 
using namespace std;
int main(){
	
	
		char c[maxn];
		int i=0;
		while(getchar()!=EOF){
			c[i]=getchar();
			if(c[i]=='\n')
				break;
			else if(c[i]>='a' && c[i]<='z')
				{
					cout<<c[i]-'a'+1;
					i++;
				}
			else if(c[i]>='A' && c[i]<='Z')
				{
					cout<<c[i]-'A'+27;
					i++;
				}
			else
				{
					cout<<c[i];
					i++;
				}
		cout<<endl;
	}
	return 0;
}
