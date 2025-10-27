#include<bits/stdc++.h>
using namespace std;
#define N 1010

string trim(const string& str) {
    string result = str;
    while (result.size() > 0 && result[0] ==' ') {
        result.erase(0, 1);
    }
    while (result.size() > 0 && result[result.size() - 1] ==' ') {
        result.erase(result.size() - 1, 1);
    }
    return result;
}

void bublesortInc(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            string s1 = trim(arr[j]);
            string s2 = trim(arr[j + 1]);
            if (s1 > s2) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bublesortDec(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            string s1 = trim(arr[j]);
            string s2 = trim(arr[j + 1]);
            if (s1 < s2) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bublesortNcInc(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            string s1 = trim(arr[j]);
            string s2 = trim(arr[j + 1]);
            for (int k = 0; k < s1.size(); k++) {
                s1[k] = tolower(s1[k]);
            }
            for (int k = 0; k < s2.size(); k++) {
                s2[k] = tolower(s2[k]);
            }
            if (s1 > s2) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bublesortNcDec(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            string s1 = trim(arr[j]);
            string s2 = trim(arr[j + 1]);
            for (int k = 0; k < s1.size(); k++) {
                s1[k] = tolower(s1[k]);
            }
            for (int k = 0; k < s2.size(); k++) {
                s2[k] = tolower(s2[k]);
            }
            if (s1 < s2) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    string com;
    int n;
    cin >> com;
    cin >> n;
    cin.ignore();
    string arr[N];
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }
    if (com == "inc") {
        bublesortInc(arr, n);
    } else if (com == "dec") {
        bublesortDec(arr, n);
    } else if (com == "ncinc") {
        bublesortNcInc(arr, n);
    } else if (com == "ncdec") {
        bublesortNcDec(arr, n);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
