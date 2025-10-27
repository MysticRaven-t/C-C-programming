#include<bits/stdc++.h>
using namespace std;
struct student {
    string id, name, sex;
    struct {
        int year, month, day;
    } date;
    double x, y, z;
};

struct other {
    string id, name, sex;
    int year, month, day;
    double x, y, z, ave1, sum1;
};

double ave(double a, double b, double c) {
    return (a + b + c) / 3;
}

double sum(double a, double b, double c) {
    return a + b + c;
}

void read(student &s) {
    cin >> s.id >> s.name >> s.sex >> s.date.year >> s.date.month >> s.date.day >> s.x >> s.y >> s.z;
}

void read1(other &stu) {
    cin >> stu.id >> stu.name >> stu.sex >> stu.year >> stu.month >> stu.day >>
        stu.x >> stu.y >> stu.z;
    stu.ave1 = ave(stu.x, stu.y, stu.z);
    stu.sum1 = sum(stu.x, stu.y, stu.z);
}

void insert(student students[], int &count) {
    student s;
    read(s);
    cout << "Insert:" << endl;
    for (int i = 0; i < count; i++) {
        if (students[i].id == s.id) {
            cout << "Failed" << endl;
            return;
        }
    }
    students[count] = s;
    count++;
    double average = ave(s.x, s.y, s.z);
    double total = sum(s.x, s.y, s.z);
    cout << s.id << " " << s.name << " " << s.sex << " " << s.date.year << " " << s.date.month << " " << s.date.day << " ";
    cout << setprecision(1) << fixed << s.x << " " << s.y << " " << s.z << " " << average << " " << total << endl;
}

void putlist(student students[], int count) {
    cout << "List:" << endl;
    for (int i = 0; i < count; i++) {
        double average = ave(students[i].x, students[i].y, students[i].z);
        double total = sum(students[i].x, students[i].y, students[i].z);
        cout << students[i].id << " " << students[i].name << " " << students[i].sex << " " << students[i].date.year << " " << students[i].date.month << " " << students[i].date.day << " ";
        cout << setprecision(1) << fixed << students[i].x << " " << students[i].y << " " << students[i].z << " " << average << " " << total << endl;
    }
}

void putfind(student students[], int count, string str) {
    cout << "Find:" << endl;
    for (int i = 0; i < count; i++) {
        if (students[i].id == str) {
            double average = ave(students[i].x, students[i].y, students[i].z);
            double total = sum(students[i].x, students[i].y, students[i].z);
            cout << students[i].id << " " << students[i].name << " " << students[i].sex << " " << students[i].date.year << " " << students[i].date.month << " " << students[i].date.day << " ";
            cout << setprecision(1) << fixed << students[i].x << " " << students[i].y << " " << students[i].z << " " << average << " " << total << endl;
            return;
        }
    }
    cout << "Failed" << endl;
}
void change(student students[], int count, other stu) {
    cout << "Change:" << endl;
    read1(stu);
    for (int i = 0; i < count; i++) {
        if (students[i].id == stu.id) {
            students[i].name = stu.name;
            students[i].sex = stu.sex;
            students[i].date.year = stu.year;
            students[i].date.month = stu.month;
            students[i].date.day = stu.day;
            students[i].x = stu.x;
            students[i].y = stu.y;
            students[i].z = stu.z;
            double average = ave(students[i].x, students[i].y, students[i].z);
            double total = sum(students[i].x, students[i].y, students[i].z);
            cout << students[i].id << " " << students[i].name << " " << students[i].sex << " " << students[i].date.year << " " << students[i].date.month << " " << students[i].date.day << " ";
            cout << setprecision(1) << fixed << students[i].x << " " << students[i].y << " " << students[i].z << " " << average << " " << total << endl;
            return;
        }
    }
    cout << "Failed" << endl;
}

void putdelete(student students[], int &count, string str) {
    cout << "Delete:" << endl;
    int index = -1;
    for (int i = 0; i < count; i++) {
        if (students[i].id == str) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Failed" << endl;
    } else {
        for (int i = index; i < count - 1; i++) {
            students[i] = students[i + 1];
        }
        count--;
        cout << "Deleted" << endl;
    }
}
int main() {
    student students[100];
    int count = 0;
    string com;
    while (true) {
        cin >> com;
        if (com == "Insert") {
            insert(students, count);
        }
        else if (com == "List") {
            putlist(students, count);
        }
        else if (com == "Find") {
            string id;
            cin >> id;
            putfind(students, count, id);
        }
        else if (com == "Change") {
            other stu;
            change(students, count, stu);
        }
        else if (com == "Delete") {
            string id;
            cin >> id;
            putdelete(students, count, id);
        }
        else if (com == "Quit" || com == "Exit") {
            cout << "Good bye!" << endl;
            break;
        }
    }
    return 0;
}
