#include<bits/stdc++.h>
using namespace std;
#define maxn 100
int main(){
	int n;
	int arr[maxn][maxn];
	cin>> n;
	while(n--){
		int r,c;
		cin>> r>> c;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>> arr[i][j];
			}	
		}
		
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				cout<<arr[j][i]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
} 
