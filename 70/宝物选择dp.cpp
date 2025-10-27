#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, n;
    cin >> v >> n;
    int volume[n];
    int value[n];
    for (int i = 0; i < n; i++) {
        cin >> volume[i] >> value[i];
    }
    double dp[n + 1][v + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= v; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = dp[i - 1][j];
                if (volume[i - 1] <= j) {
                    dp[i][j] = max(dp[i][j], value[i - 1] + dp[i][j - volume[i - 1]]);
                }
            }
        }
    }
    cout << fixed << setprecision(2) << dp[n][v] << endl;

    return 0;
}
