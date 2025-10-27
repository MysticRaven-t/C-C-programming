#include <bits/stdc++.h>
using namespace std;

const int N = 100;
char c[N];

int main() {
    int n = 0;
    while (1) {
        c[n] = getchar();
        if (c[n] == '\n')
            break;
        n++;
    }

    bool appeared[26] = {false};
    for (int i = 0; i < n; i++) {
        if (c[i] >= 'A' && c[i] <= 'Z') {
            if (!appeared[c[i] - 'A']) {
                cout << c[i] << " ";
                appeared[c[i] - 'A'] = true;
            }
        }
    }
    cout << endl;
    return 0;
}
