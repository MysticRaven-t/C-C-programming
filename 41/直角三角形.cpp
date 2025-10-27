#include <bits/stdc++.h>
using namespace std;

bool Triangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b) return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int n, sum = 0;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                for (int k = 1; k < j; k++) {
                    if (Triangle(k, j, i)) {
                        sum++;
                    }
                }
            }
        }

        cout << "case#" << t << "\n" << sum << endl;
    }

    return 0;
}
