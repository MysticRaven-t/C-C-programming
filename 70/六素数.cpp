#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b - 6; i++) {
        if (isPrime(i) && isPrime(i + 6)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}
