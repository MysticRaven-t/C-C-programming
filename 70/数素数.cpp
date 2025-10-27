#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int m, n;
    cin >> m >> n;
    int count = 0;
    for (int i = 2; ; i++) {
        if (isPrime(i)) {
            count++;
            if (count >= m && count <= n) {
                cout << i;
                if ((count - m + 1) % 10!= 0 && count < n) {
                    cout << " ";
                } else if ((count - m + 1) % 10 == 0) {
                    cout << endl;
                }
            }
            if (count == n) break;
        }
    }
    cout<<endl;
    return 0;
}
