#include <bits/stdc++.h>
using namespace std;

void turn(int n, int x,string &s) {
	bool judge=true;
    if(n<0) {
    	n=abs(n);
    	judge=false;
	}
	if(n==0) cout<<"0";
    while (n > 0) {
        int bit = n % x;
        if (bit >= 0 && bit <= 9)
            s+='0' + bit;
        else
            s+='A' + bit - 10;
        n /= x;
    }
    if(!judge) s+='-';
    reverse(s.begin(), s.end());
}

int main() {
    int n, x;
    while (cin >> n >> x) {
    	string s;
        turn(n, x,s);
        cout << s << endl;
    }
    return 0;
}
