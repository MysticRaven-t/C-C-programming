#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0)
            break;
        else if (n > 0 && n <= 4)
            cout << n << endl;
        else if (n > 4) {
            int a = 1, b = 2, c = 3;
            int result;
            for (int i = 4; i <= n; i++) {
                result = a + c;
                a = b;
                b = c;
                c = result;
            }
            cout << result << endl;
        }
    }
    return 0;
}
