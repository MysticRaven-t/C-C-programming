#include <iostream>

int main() {
    int n;
    int a = 1, b = 1;

    while (std::cin >> n) {
        if (n == -1) {
            break;
        }

        if (n < 3) {
            std::cout << 1 << std::endl;
            continue;
        }

        int c;
        for (int i = 3; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        std::cout << b << std::endl;
    }
    return 0;
}
