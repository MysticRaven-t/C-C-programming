#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                // 小写字母转换为对应数字
                s[i] = (s[i] - 'a' + 1) % 26;
                if (s[i] == 0) s[i] = 26;
                s[i] += '0';
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                // 大写字母转换为对应数字
                s[i] = (s[i] - 'A' + 27) % 26;
                if (s[i] == 0) s[i] = 26;
                s[i] += '0';
            }
        }
        cout << s << endl;
    }
    return 0;
}
