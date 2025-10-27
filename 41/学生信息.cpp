#include<bits/stdc++.h>
using namespace std;

struct student {
    string id;
    string name;
    char sex;
    double chinese;
    double math;
    double english;
}a;

int main() {
    while (1) {
        string command;
        cin >> command;
        if (command == "Quit" || command == "Exit") {
            cout << "Good bye!" << endl;
            break;
        } else if (command == "Insert") {
            cin >> a.id;
            cin >> a.name;
            cin >> a.sex;
            cin >> a.chinese;
            cin >> a.math;
            cin >> a.english;
            printf("Insert:\n");
            cout << a.id << " " << a.name << " " << a.sex << " ";
            printf("%.1lf %.1lf %.1lf\n", a.chinese, a.math, a.english);
        }
    }

    return 0;
}
