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
		double b;
		b=1.0*sum/n;
		cout<<setprecision(2)<<fixed<<b<<endl;
    }
    return 0;
}

