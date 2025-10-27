#include<bits/stdc++.h>
using namespace std;

struct student {
    string id, name, sex;
    int year, month, day;
    double x, y, z;
};

double ave(double a, double b, double c) {
    return (a + b + c) / 3;
}

double sum(double a, double b, double c) {
    return a + b + c;
}

void read(student &s) {
    cin >> s.id >> s.name >> s.sex >> s.year >> s.month >> s.day >> s.x >> s.y >> s.z;
}

void insert(student s) {
    cout << "Insert:" << endl;
    double average = ave(s.x, s.y, s.z);
    double total = sum(s.x, s.y, s.z);
    cout << s.id << " " << s.name << " " << s.sex << " " << s.year << " " << s.month << " " << s.day << " ";
    cout << fixed << setprecision(1) << s.x << " " << s.y << " " << s.z << " " << average << " " << total << endl;
}

void output(student students[], int num) {
    cout << "List:" << endl;
    for (int i = 0; i < num; i++) {
        double average = ave(students[i].x, students[i].y, students[i].z);
        double total = sum(students[i].x, students[i].y, students[i].z);
        cout << students[i].id << " " << students[i].name << " " << students[i].sex << " " << students[i].year << " " << students[i].month << " " << students[i].day << " ";
        cout << fixed << setprecision(1) << students[i].x << " " << students[i].y << " " << students[i].z << " " << average << " " << total << endl;
    }
}

int main() {
    const int maxn = 100;
    student students[maxn];
    int num = 0;
    string command;
    while (cin >> command) {
        if (command == "Insert") {
            if (num < maxn) {
                student s;
                read(s);
                insert(s);
                students[num] = s;
                num++;
            }
        } else if (command == "List") {
            output(students, num);
        } else if (command == "Quit" || command == "Exit") {
            cout << "Good bye!" << endl;
            break;
        }
    }
    return 0;
}
