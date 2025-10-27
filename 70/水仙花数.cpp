#include <iostream>
using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n) {
        int cnt = 0;
        for (int i = m; i <= n; i++) {
            int a = i / 100 % 10;
            int b = i / 10 % 10;
            int c = i % 10;
            if (i == a * a * a + b * b * b + c * c * c) {
                cnt++;
                if (cnt == 1) {
                    cout << i;
                } else {
                    cout << " " << i;
                }
            }
        }
        if (cnt == 0) {
            cout << "no" << endl;
        } else {
            cout << endl;
        }
    }
    return 0;
}
