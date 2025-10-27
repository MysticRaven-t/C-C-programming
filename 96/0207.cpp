#include<bits/stdc++.h>
using namespace std;
const int maxn = 5;
int a[maxn]={0};
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int input_a;
        cin >> input_a;
        int sum = 0;
        for (int i = 0; i < maxn; i++)
        {
            cin >> a[i];
            if (a[i]<input_a)
                sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
