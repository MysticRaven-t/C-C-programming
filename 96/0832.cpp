#include<bits/stdc++.h>
using namespace std;
const int maxn = 100;
int f[maxn][maxn];

int main()
{
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> f[i][j];
        }
    }
    bool found = false;
    for (int i = 0; i < r; i++)
    {
        int rowMax = f[i][0];
        int t = 0;
        for (int j = 1; j < c; j++)
        {
            if (f[i][j] > rowMax)
            {
                rowMax = f[i][j];
                t = j;
            }
        }
        int colMin = rowMax;
        for (int k = 0; k < r; k++)
        {
            if (k!= i && f[k][t] < colMin)
            {
                colMin = f[k][t];
            }
        }
        if (rowMax == colMin)
        {
            cout << i << " " << t << " " << rowMax << " " <<endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "N" << endl;
    }
    return 0;
}
