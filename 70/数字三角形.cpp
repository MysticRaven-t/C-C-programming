#include<bits/stdc++.h>
using namespace std;
const int N = 50;
int a[N][N];

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int num = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                a[i][j] = num++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                cout << a[j][i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
