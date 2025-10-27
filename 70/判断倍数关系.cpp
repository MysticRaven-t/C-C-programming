#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if ((b == 0 && a == 0) || (b!= 0 && abs(a) % abs(b) == 0)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
