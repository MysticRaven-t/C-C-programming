#include<bits/stdc++.h>
using namespace std;
struct stu{
    string id;
    string name;
    double math, chinese, english, average;
}a[10];
void bubbleSort() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[j].average > a[j + 1].average) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main()
{
    for (int i = 0; i < 5; i++) {
        cin >> a[i].id >> a[i].name >> a[i].math >> a[i].chinese >> a[i].english;
        a[i].average = (a[i].math + a[i].chinese + a[i].english) / 3;
    }
    bubbleSort();
    for (int i = 0; i < 5; i++) {
        cout << a[i].id << " " << a[i].name << " ";
        cout << fixed << setprecision(1) << a[i].math << " " << a[i].chinese << " " << a[i].english << " " << a[i].average << endl;
    }
    return 0;
}
