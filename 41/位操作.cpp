#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    while (cin >> a) {
        int result = (a >> 4) & 0xF;
        cout << result << endl;
    }
    return 0;
}
