#include<bits/stdc++.h>
using namespace std;
struct stu{
    string name;
    string id;
    int grade;
};

int main()
{
    int n;
    cin>>n;
    stu students[n];  // 结构体数组存储学生信息
    for(int i = 0; i < n; i++){
        cin>>students[i].name>>students[i].id>>students[i].grade;
    }
    int min_n = students[0].grade;
    int max_n = students[0].grade;
    string name_s1 = students[0].name;
    string id_s1 = students[0].id;
    string name_s2 = students[0].name;
    string id_s2 = students[0].id;
    for(int i = 1; i < n; i++){
        if(students[i].grade < min_n){
            min_n = students[i].grade;
            name_s1 = students[i].name;
            id_s1 = students[i].id;
        }
        if(students[i].grade > max_n){
            max_n = students[i].grade;
            name_s2 = students[i].name;
            id_s2 = students[i].id;
        }
    }
    cout<<name_s2<<" "<<id_s2<<endl;
    cout<<name_s1<<" "<<id_s1<<endl;
    return 0;
}
