#include<bits/stdc++.h>
using namespace std;
struct stu{
    string name;
    double c, math, english, total;
}a[10];
void bubbleSort() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[j].total < a[j + 1].total) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    for (int i = 0; i < 5; i++) {
        cin >> a[i].name >> a[i].c >> a[i].math >> a[i].english;
        a[i].total = a[i].c + a[i].math + a[i].english;
    }
    bubbleSort();
    for (int i = 0; i < 5; i++) {
        cout << a[i].name << " ";
        cout << fixed << setprecision(1) << a[i].c << " " << a[i].math << " " << a[i].english << " " << a[i].total << endl;
    }
    return 0;
}
