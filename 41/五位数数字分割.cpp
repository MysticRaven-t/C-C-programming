#include <iostream>
using namespace std;
void digit(int n) {
    cout << n / 10000 << "---";
    n %= 10000;
    cout << n / 1000 << "---";
    n %= 1000;
    cout << n / 100 << "---";
    n %= 100;
    cout << n / 10 << "---";
    cout << n % 10;
}
int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        else
            digit(n);
        cout << endl;
    }
    return 0;
}
