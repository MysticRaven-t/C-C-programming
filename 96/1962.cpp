#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
    	int sum=0;
        for(int i=1;i<=n;i++)
        {
        	int m;
        	cin>>m;
        	sum+=m;
		}
		cout<<setprecision(2)<<fixed<<sum/n<<endl;
    }
    return 0;
}

