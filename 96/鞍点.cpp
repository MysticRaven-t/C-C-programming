#include <iostream>
using namespace std;
const int N = 100;
int a[N][N];

int main() {
    int n, m;
    bool found = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int rowMax = a[i][0];
        int colIndex = 0;
        // �������ֵ��������������
        for (int j = 0; j < m; j++) {
            if (a[i][j] > rowMax) {
                rowMax = a[i][j];
                colIndex = j;
            }
        }
        bool isMinInCol = true;
        // �жϸ�ֵ�Ƿ��������е���Сֵ
        for (int k = 0; k < n; k++) {
            if (a[k][colIndex] < rowMax) {
                isMinInCol = false;
                break;
            }
        }
        if (isMinInCol) {
            found = true;
            cout << rowMax << " " << colIndex << endl;
            break;  // ���ֻ��Ҫ�ҵ�һ������Ϳ��Խ����ˣ��ɸ���ʵ����������Ƿ������
        }
    }
    if (!found) cout << "Not found\n";
    return 0;
}
