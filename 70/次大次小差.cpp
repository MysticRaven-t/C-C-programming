#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
int a[maxn];
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int max1 = a[0];
        int max2 = INT_MIN;
        int min1 = a[0];
        int min2 = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (a[i] > max1) {
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2 && a[i]!= max1) {
                max2 = a[i];
            }
            if (a[i] < min1) {
                min2 = min1;
                min1 = a[i];
            } else if (a[i] < min2 && a[i]!= min1) {
                min2 = a[i];
            }
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] == max1 && i!= 0) {
                max2 = max1;
            }
            if (a[i] == min1 && i!= 0) {
                min2 = min1;
            }
            if (a[i] < min2 && a[i]!= min1) {
                min2 = a[i];
            }
        }
        cout << max2 - min2 << endl;
        if (T > 0) {
            cout << endl;
        }
    }
    return 0;
}
