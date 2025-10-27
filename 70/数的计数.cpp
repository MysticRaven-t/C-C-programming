#include <bits/stdc++.h>
using namespace std;
int dp[301];
int solve(int n) {
    if (dp[n]!= 0) return dp[n];
    dp[n] = 1;
    for (int i = 1; i <= n / 2; ++i) {
        dp[n] += solve(i);
    }
    return dp[n];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i <= n; ++i) {
            dp[i] = 0;
        }
        cout << solve(n) << endl;
    }
    return 0;
}
