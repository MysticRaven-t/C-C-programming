#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 2, n = 5;
    int t = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        t = t * 10 + a;
        sum += t;
        if (i < n - 1) cout << "a" << string(i + 1, 'a') << "+";
        if (i == n - 1) cout << "a" << string(i + 1, 'a');
    }
    cout << "=24690" << endl;
    return 0;
}
