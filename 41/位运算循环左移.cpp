#include<bits/stdc++.h>
using namespace std;
bool judge(int n, int m) {
    for (int i = 0; i < 16; i++) {
        int temp = (n << i) | (n >> (16 - i));
        temp &= 0xffff;
        if (temp == m) return true;
    }
    return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		if(judge(n,m)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
