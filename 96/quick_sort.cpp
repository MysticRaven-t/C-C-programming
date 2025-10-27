#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;

void quickSort(int a[], int left, int right) {
    if (left >= right) return;
    int i = left, j = right;
    int pivot = a[left];
    while (i < j) {
        while (i < j && a[j] >= pivot) {
            j--;
        }
        if (i < j) {
            a[i] = a[j];
        }
        while (i < j && a[i] <= pivot) {
            i++;
        }
        if (i < j) {
            a[j] = a[i];
        }
    }
    a[i] = pivot;
    quickSort(a, left, i - 1);
    quickSort(a, i + 1, right);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[maxn];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        quickSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++) {
            if (i!= 0) cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}
