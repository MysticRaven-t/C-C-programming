#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        if (cin.eof())
            break;
        int len = s.length();
        char maxChar = s[0];
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
            if (maxChar < s[i]) {
                maxChar = s[i];
            }
        }
        for (int i = 0; i < len; i++) {
            if (s[i] == maxChar) {
                cout << s[i] << "(max)";
            } else {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}
