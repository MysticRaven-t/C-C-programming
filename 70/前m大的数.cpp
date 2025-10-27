#include<bits/stdc++.h>
using namespace std;
const int maxn = 200;
int a[20], b[maxn];
int main()
{
    int n, m;
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                b[k++] = a[i] + a[j];
            }
        }
        sort(b, b + k, greater<int>());
        for (int i = 0; i < m; i++) { 
            cout << b[i] << " " ;
        }
        cout << endl;
    }
    return 0;
}
