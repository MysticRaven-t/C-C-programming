#include<bits/stdc++.h>
using namespace std;
const int maxn = 1010;
int a[maxn];
int main() {
    int n, cnt;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        a[i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            a[j] = 1 - a[j];
        }
    }
    cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
