#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string line;
        getline(cin, line);
        int len = line.length();
        for (int i = 0; i < len; i++) {
            char c = line[i];
            if (c >= 'a' && c <= 'z') {
                cout << c - 'a'+1;
            } else if (c >= 'A' && c <= 'Z') {
                cout << c - 'A'+27;
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}

