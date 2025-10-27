#include <iostream>
#include <sstream>
using namespace std;

// 判断数字是否不吉利
bool isUnlucky(int num) {
    stringstream ss;
    ss << num;
    string numStr;
    ss >> numStr;
    return numStr.find('4')!= string::npos || numStr.find("62")!= string::npos;
}

int main() {
    int n, m;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        int count = 0;
        for (int i = n; i <= m; i++) {
            if (!isUnlucky(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}
