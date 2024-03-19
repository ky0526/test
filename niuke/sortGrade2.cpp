/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-19 17:09:34
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-19 17:27:59
 * @FilePath: \C C++\niuke\sortGrade2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int grade;
    Student() {}
    Student(string name0, int grade0)
    {
        name = name0;
        grade = grade0;
    }
};

bool cmp(Student a, Student b, int mode)
{
    if (mode == 0)
        return a.grade > b.grade;
    else
        return a.grade < b.grade;
}

int main()
{
    int num;
    string name;
    int grade;
    int mode; // 0降序 1升序
    cin >> num;
    auto *Students = new Student[num];
    cin >> mode;
    for (int i = 0; i < num; i++)
    {
        cin >> name >> grade;
        Students[i] = Student(name, grade);
    }
    sort(Students, Students + num, [mode](Student a, Student b)
         { 
        if(mode == 0) return a.grade > b.grade;
        else return a.grade < b.grade; });
    for (int i = 0; i < num; i++)
    {
        cout << Students[i].name << ' ' << Students[i].grade << endl;
    }
}