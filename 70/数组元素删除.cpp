#include<bits/stdc++.h>
using namespace std;
const int maxn = 110;
int a[maxn];

int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;

    int new_n = 0;  // ������¼ɾ��Ԫ�غ��µ�������ЧԪ�ظ���
    for (int i = 0; i < n; i++) {
        if (a[i]!= m) {
            a[new_n++] = a[i];
        }
    }
    // ���ɾ��ָ��Ԫ�غ������
    for (int i = 0; i < new_n; i++) {
        if (i!= 0) cout << " ";
        cout << a[i];
    }
    cout << endl;

    return 0;
}
