#include<bits/stdc++.h>
using namespace std;
const int maxn = 20;
int f[maxn][maxn];
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int s = 1;
        for (int c = 1; c <= n; c++) {
            for (int r = 0; r < n - c + 1; r++) {
                f[r + 1][c] = s + r;
            }
            s += n - c + 1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i + 1; j++) {
                cout << f[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
