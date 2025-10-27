#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int b = 1; b <= n / 2+1; b++)
    {
        for (int i = 1; i <= n / 2 + 1 - b; i++) cout << "-";
        for (int j = 1; j <= 2 * b - 1; j++) cout << "*";
        for (int s = 1; s <= n / 2 + 1 - b; s++) cout << "-";
        cout << endl;
    }
    for (int B = n / 2; B >= 1; B--)
    {
        for (int I = 1; I <= n / 2 + 1 - B; I++) cout << "-";
        for (int J = 1; J <= 2 * B - 1; J++) cout << "*";
        for (int S = 1; S <= n / 2 + 1 - B; S++) cout << "-";
        cout << endl;
    }
    return 0;
}
