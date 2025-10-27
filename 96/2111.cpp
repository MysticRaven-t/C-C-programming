#include <bits/stdc++.h>
using namespace std;

bool issky(int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (issky(n))
            cout << n << " is a Sky Number." << endl;
        else
            cout << n << " is not a Sky Number." << endl;
    }
    return 0;
}

bool issky(int n)
{
    int original_n = n;
    // 十二进制转换
    int c12 = 0;
    int temp_n = n;
    int base = 1;
    while (temp_n > 0)
    {
        int digit = temp_n % 12;
        c12 += digit * base;
        temp_n /= 12;
        base *= 12;
    }
    if (original_n == c12)
    {
        // 十六进制转换
        int c16 = 0;
        temp_n = n;
        base = 1;
        while (temp_n > 0)
        {
            int digit = temp_n % 16;
            c16 += digit * base;
            temp_n /= 16;
            base *= 16;
        }
        return original_n == c16;
    }
    return false;
}
