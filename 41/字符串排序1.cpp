#include <bits/stdc++.h>
using namespace std;
int _strcmp(char a[],char b[]){
	int i=0;
	while(1){
		if(a[i]<b[i]) return 1;
		if(a[i]>b[i]) return -1;
		if(a[i]=='\0'||b[i]=='\0') return 0;
		i++;
	}
}
int main()
{
	char s[100][20];
	int a[100],t,n=0;
	while(cin>>s[n]){
		a[n]=n;
		n++;		
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(_strcmp(s[a[i]],s[a[j]])==-1){
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(int i=0;i<n;i++) cout<<s[a[i]]<<" ";	
	return 0;
} 
