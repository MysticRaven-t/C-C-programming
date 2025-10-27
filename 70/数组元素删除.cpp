#include<bits/stdc++.h>
using namespace std;
const int maxn = 110;
int a[maxn];

int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;

    int new_n = 0;  // 用来记录删除元素后新的数组有效元素个数
    for (int i = 0; i < n; i++) {
        if (a[i]!= m) {
            a[new_n++] = a[i];
        }
    }
    // 输出删除指定元素后的数组
    for (int i = 0; i < new_n; i++) {
        if (i!= 0) cout << " ";
        cout << a[i];
    }
    cout << endl;

    return 0;
}
