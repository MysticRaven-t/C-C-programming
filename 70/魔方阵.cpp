#include <bits/stdc++.h>
using namespace std;
const int N=50;
int a[N][N]={0};
int main()
{
	int n,x,y,key=0,k=0;
	cin>>n;
	x=0;
	y=n/2;
	a[x][y]=1;
	for(int i=2;i<=n*n;i++){
		int posx=x;
		int posy=y;
		x-=1;y+=1;
		if(x==-1) x=n-1;
		if(y==n) y=0;
		if(a[x][y]==0){
			a[x][y]=i;
		}
		else {
			x=posx+1;
			y=posy;
			if(x==n) x=0;
			a[x][y]=i;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		puts("");
	}
	return 0;
} 
