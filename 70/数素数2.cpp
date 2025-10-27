#include<bits/stdc++.h>
using namespace std;
const int maxn = 10010;
int a[maxn];

// 准确筛选出不超过n的素数
void prime(int a[], int n) {
    a[1] = 1;
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 0) {
            for (int j = i * i; j <= n; j += i)
                a[j] = 1;
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    prime(a, n);

    int primeCount = 0;
    int startIndex = 0;
    // 准确找到第Pm个素数的索引位置
    for (int i = 2; i <= n; i++) {
        if (!a[i]) {
            primeCount++;
            if (primeCount == m) {
                startIndex = i;
                break;
            }
        }
    }

    int outputCount = 0;
    // 从第Pm个素数的索引位置开始输出到第Pn个素数，每10个素数换行
    for (int i = startIndex; i <= n; i++) {
        if (!a[i]) {
            outputCount++;
            if (outputCount >= m && outputCount <= n) {
                if (outputCount % 10 == 1) cout << i;
                else {
                    cout << " " << i;
                    if (outputCount % 10 == 0) cout << endl;
                }
            }
        }
    }
    cout << endl;

    return 0;
}
