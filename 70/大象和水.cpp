#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int h, r;
        cin >> h >> r;
        double v = 3.14159 * r * r * h;
        int t = ceil(20000.0 / v);
        cout << t << endl;
    }
    return 0;
}
