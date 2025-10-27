#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int s = 1;
        for (int i = 1; i < n; i++) {
            s = (s + 1) * 2;
        }
        cout << s << endl;
    }
    return 0;
}
