#include <iostream>
using namespace std;

int main() {
    while (true) {
        char c;
        int n;
        cin >> c;
        if (c == '@') break;
        
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << ' ';
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                if (k == 1 || k == 2 * i - 1 || i == n) {
                    cout << c;
                } else {
                    cout << ' ';
                }
            }

            cout << endl;
        }
        
        cout << endl;
    }
    return 0;
}
