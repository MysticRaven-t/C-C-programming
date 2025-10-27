#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    while (cin>>s>>t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        if (i == s.size()) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
