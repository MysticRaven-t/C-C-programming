#include<bits/stdc++.h>
using namespace std;

struct student {
    string id, name, sex;
    struct {
        int year, month, day;
    } date;
    double x, y, z;
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

void printStudentInfo(const student &s) {
    double average = ave(s.x, s.y, s.z);
    double total = sum(s.x, s.y, s.z);
    cout << fixed << setprecision(1) << s.id << " " << s.name << " " << s.sex << " " << s.date.year << " " << s.date.month << " " << s.date.day << " "
         << s.x << " " << s.y << " " << s.z << " " << average << " " << total << endl;
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
    printStudentInfo(s);
}

void putlist(student students[], int count) {
    cout << "List:" << endl;
    for (int i = 0; i < count; i++) {
        printStudentInfo(students[i]);
    }
}

void putfind(student students[], int count, string str) {
    cout << "Find:" << endl;
    for (int i = 0; i < count; i++) {
        if (students[i].id == str) {
            printStudentInfo(students[i]);
            return;
        }
    }
    cout << "Failed" << endl;
}

void change(student students[], int count, student newInfo) {
    cout << "Change:" << endl;
    read(newInfo);
    for (int i = 0; i < count; i++) {
        if (students[i].id == newInfo.id) {
            students[i] = newInfo;
            printStudentInfo(students[i]);
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

void swapStudents(student &a, student &b) {
    student temp = a;
    a = b;
    b = temp;
}

void sortById(student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudents(students[j], students[j + 1]);
            }
        }
    }
    cout << "Sort:" << endl;
    for (int i = 0; i < count; i++) {
        printStudentInfo(students[i]);
    }
}

void sortByBirthday(student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].date.year > students[j + 1].date.year ||
                (students[j].date.year == students[j + 1].date.year && students[j].date.month > students[j + 1].date.month) ||
                (students[j].date.year == students[j + 1].date.year && students[j].date.month == students[j + 1].date.month && students[j].date.day > students[j + 1].date.day)) {
                swapStudents(students[j], students[j + 1]);
            }
        }
    }
    cout << "Sort:" << endl;
    for (int i = 0; i < count; i++) {
        printStudentInfo(students[i]);
    }
}

void sortBySum(student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            double sum1 = sum(students[j].x, students[j].y, students[j].z);
            double sum2 = sum(students[j + 1].x, students[j + 1].y, students[j + 1].z);
            if (sum1 > sum2) {
                swapStudents(students[j], students[j + 1]);
            }
        }
    }
    cout << "Sort:" << endl;
    for (int i = 0; i < count; i++) {
        printStudentInfo(students[i]);
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
            student stu;
            change(students, count, stu);
        }
        else if (com == "Delete") {
            string id;
            cin >> id;
            putdelete(students, count, id);
        }
        else if (com == "Sort") {
            string sortOption;
            cin >> sortOption;
            if (sortOption == "byid") {
                sortById(students, count);
            }
            else if (sortOption == "bybirthday") {
                sortByBirthday(students, count);
            }
            else if (sortOption == "bysum") {
                sortBySum(students, count);
            }
        }
        else if (com == "Quit" || com == "Exit") {
            cout << "Good bye!" << endl;
            break;
        }
    }
    return 0;
}
