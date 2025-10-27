#include <iostream>
using namespace std;
const int maxn = 200;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[maxn];
    int copy[maxn];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        copy[(i + m) % n] = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i != 0)
            cout << " ";
        cout << copy[i];
    }
    cout << endl;

    return 0;
}
