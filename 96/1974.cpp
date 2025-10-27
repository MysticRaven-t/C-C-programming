#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.get(); // 处理输入n后的换行符

    for (int i = 0; i < n; i++) {
        char ch;
        while ((ch = cin.get())!= '\n') {
            if (ch >= 'a' && ch <= 'z') {
                cout << int(ch - 'a' + 1);
            } else if (ch >= 'A' && ch <= 'Z') {
                cout << int(ch - 'A' + 27);
            } else {
                cout << ch;
            }
        }
        cout << endl;
    }

    return 0;
}
