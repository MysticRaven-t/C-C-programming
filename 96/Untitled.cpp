#include <iostream>
#include <algorithm>
#include <iomanip> // ������������ľ���

using namespace std;

const int MAXN = 10010; // ���������Ʒ����
int volume[MAXN]; // �洢ÿ����Ʒ�����
int value[MAXN]; // �洢ÿ����Ʒ�ļ�ֵ
double dp[MAXN + 1][MAXN + 1]; // ��̬�滮����

int main() {
    int v, n;
    cin >> v >> n; // ���뱳����������Ʒ����
    for (int i = 0; i < n; ++i) {
        cin >> volume[i] >> value[i]; // ����ÿ����Ʒ������ͼ�ֵ
    }

    // ��̬�滮���
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= v; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0; // ��ʼ״̬��û����Ʒ���߱�������Ϊ0����ֵΪ0
            } else {
                if (volume[i - 1] <= j) {
                    // �����ǰ��Ʒ���С�ڵ��ڱ���ʣ������������ѡ��Ż򲻷�
                    dp[i][j] = max(dp[i - 1][j], value[i - 1] + dp[i - 1][j - volume[i - 1]]);
                } else {
                    // �����ǰ��Ʒ������ڱ���ʣ��������ֻ��ѡ�񲻷�
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }

    // �������ֵ��������λС��
    cout << fixed << setprecision(2) << dp[n][v] << endl;

    return 0;
}
