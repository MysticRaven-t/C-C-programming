#include <bits/stdc++.h>
using namespace std; 

int strrindex(string &s, string &t) {
    int pos = s.rfind(t);
    return pos;
}

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int result = strrindex(s, t);
    cout << result << endl;
    return 0;
}
