#include <cstdio>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int sum = a + b;
    int product = a * b;
    int difference = a - b;
    int quotient = 0;

    if (b != 0) {
        quotient = a / b;
    }
    
    printf("%d %d %d %d\n", sum, product, difference, quotient);
    
    return 0;
}
