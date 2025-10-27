#include<bits/stdc++.h>
using namespace std;
const int maxn=11;
char s[maxn];
char s1[maxn];
int main()
{
	int n;
	cin>> n;
	while(n--){
		scanf("%s",s);
		s1[0]='6';
		int i=6;
		for(int j=1;j<=5;j++){
			s1[j]=s[i];
			i++;	
		}
		printf("%s\n",s1);
	}
	return 0;
}
