#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        if (a == 0) {
            cout << "0" << " " << endl; 
            continue;
        }
        int divisor = 1; 
        while (a / divisor > 9) {
            divisor *= 10;
        }
        while (divisor > 0) {
            int currentDigit = a / divisor; 
            cout << currentDigit << " ";
            a %= divisor;
            divisor /= 10;
        }
        cout << endl;
    }
    return 0;
}
