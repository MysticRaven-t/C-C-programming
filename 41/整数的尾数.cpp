#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0) break;
		int result,cnt,t;
		cnt=0;
		for(int i=0;i<=9;i++){ 
			for(int j=0;j<=9;j++){
				t=10*i+j;
				result=100*n+t;
				if(result%m==0){					
                    if(cnt>0) cout<<" ";
                    if(t!=0) cout<<t;
                    if(t==0) cout<<"00";
                    cnt++;
                }
			}
		}
		cout<<endl;
	}
	return 0;
} 
