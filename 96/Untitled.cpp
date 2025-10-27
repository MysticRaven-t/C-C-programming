#include <iostream>
#include <algorithm>
#include <iomanip> // 用于设置输出的精度

using namespace std;

const int MAXN = 10010; // 定义最大物品数量
int volume[MAXN]; // 存储每个物品的体积
int value[MAXN]; // 存储每个物品的价值
double dp[MAXN + 1][MAXN + 1]; // 动态规划数组

int main() {
    int v, n;
    cin >> v >> n; // 输入背包容量和物品数量
    for (int i = 0; i < n; ++i) {
        cin >> volume[i] >> value[i]; // 输入每个物品的体积和价值
    }

    // 动态规划填表
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= v; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0; // 初始状态，没有物品或者背包容量为0，价值为0
            } else {
                if (volume[i - 1] <= j) {
                    // 如果当前物品体积小于等于背包剩余容量，可以选择放或不放
                    dp[i][j] = max(dp[i - 1][j], value[i - 1] + dp[i - 1][j - volume[i - 1]]);
                } else {
                    // 如果当前物品体积大于背包剩余容量，只能选择不放
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }

    // 输出最大价值，保留两位小数
    cout << fixed << setprecision(2) << dp[n][v] << endl;

    return 0;
}
