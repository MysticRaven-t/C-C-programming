#include <bits/stdc++.h>
using namespace std;
const int maxn = 10001;
int a[maxn] = {0};

// 修改后的yinzi函数，返回整数n的因子个数
int yinzi(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            a[c] = i;
            c++;
        }
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        int a_, b_;
        cin >> a_;
        cin >> b_;
        int max_factors = 0;
        int result_num = a_;
        for (int x = a_; x <= b_; x++)
        {
            int cur_factors = yinzi(x);
            if (cur_factors > max_factors)
            {
                max_factors = cur_factors;
                result_num = x;
            }
            else if (cur_factors == max_factors && x < result_num)
            {
                result_num = x;
            }
        }
        cout << result_num << endl;
    }
    return 0;
}
