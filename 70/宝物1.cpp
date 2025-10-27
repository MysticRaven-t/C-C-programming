#include <bits/stdc++.h>
using namespace std;

struct baowu {
    int m; // 体积
    int v; // 价值
    double price; // 单位价值
} g[110];

bool compare(baowu a, baowu b) {
    return a.price > b.price;
}

int main() {
    int n, t;
    double total;
    cin >> n >> t;
    if (n == 0) {
        cout << fixed << setprecision(2) << 0.00 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> g[i].m >> g[i].v;
        g[i].price = (double)g[i].v / g[i].m; // 修正单位价值计算
    }
    sort(g, g + n, compare);
    int i = 0;
    total = 0;
    while (i < n) { // 修正循环条件
        if (t >= g[i].m) {
            t -= g[i].m;
            total += g[i].v;
        } else {
            total += t * g[i].price; // 修正容量更新
            break;
        }
        i++;
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
