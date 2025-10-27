#include <bits/stdc++.h>
using namespace std;

void guifan(double (*matrix)[50], int m, int n) {
    for (int i = 0; i < m; i++) {
        double maxVal = matrix[i][0];
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            matrix[i][j] /= maxVal;
            cout << fixed << setprecision(2) << matrix[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    double matrix[50][50];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    guifan(matrix, m, n);
    return 0;
}
