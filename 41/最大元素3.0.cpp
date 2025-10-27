#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        if (s.empty())
            break;
        char maxChar = s[0];
        for (int i = 0; i < s.length(); i++) {
            if (s[i] > maxChar) {
                maxChar = s[i];
            }
        }
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            result += s[i];
            if (s[i] == maxChar) {
                result += "(max)";
            }
        }
        cout << result << endl;
    }
    return 0;
}
