#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, a, n, t, sum;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> n;
        t = 0;
        sum = 0;
        for (int j = 0; j < n; j++) {
            t = t * 10 + a;
            sum += t;
        }
        cout << "a+aa+aaa+...=" << sum << endl;
    }
    return 0;
}
