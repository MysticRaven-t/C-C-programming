#include <iostream>
#include <iomanip>
using namespace std;
const int maxn = 1010;
int a[maxn];

int main()
{
    int n, a1 = 0, b = 0, c = 0, d = 0, e,count;
    double d1;
    int cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0 && a[i] % 2 == 0) {
            a1 += a[i];
        }
        if (a[i] % 5 == 1) {
            if (cnt % 2!= 0) {
                b -= a[i];
            }
            else {
                b += a[i];
            }
            cnt++;
        }
        if (a[i] % 5 == 0)
            c++;
        count = 0;
        if (a[i] % 5 == 3) {
            d += a[i];
            count++;
        }
        if (a[i] % 5 == 4) {
            int arr[maxn] = { 0 };
            int j = 0;
            arr[j] = a[i];
            j++;
        }
    }

    // ����d1������countΪ0�����
    if (count > 0) {
        d1 = (double)d / count;
    }
    else {
        d1 = 0;
    }

    // �����Ҷ�5ȡ��Ϊ4��Ԫ���е����ֵ
    int arr[maxn] = { 0 };
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 4) {
            arr[j] = a[i];
            j++;
        }
    }
    if (j > 0) {
        e = arr[0];
        for (int i = 1; i < j; i++) {
            if (arr[i] > e) {
                e = arr[i];
            }
        }
    }
    else {
        e = 0;  // ���û������������Ԫ�أ���Ĭ��ֵ
    }

    cout << a1 << " " << b << " " << c << " " << setprecision(1) << d1 << " " << e << endl;
    return 0;
}
