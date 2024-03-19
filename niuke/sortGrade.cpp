/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-18 10:38:46
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-18 11:16:02
 * @FilePath: \C C++\test_24_03_18\test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>    // for string type
#include <vector>    // for vector type
#include <algorithm> // for sort function
using namespace std;

class student
{
public:
    int roll_no;
    int grade;
    student() {}
    student(int r, int g)
    {
        roll_no = r;
        grade = g;
    }
};

int main()
{
    int num = 0;
    cin >> num;
    student *students = new student[num];
    for (int i = 0; i < num; i++)
    {
        int r, g;
        cin >> r >> g;
        students[i] = student(r, g);
    }
    sort(students, students + num, [](student a, student b) // sort的lambda表达式
         {
            if(a.grade != b.grade)
                return a.grade < b.grade;
            else
                return a.roll_no < b.roll_no; });
    for (int i = 0; i < num; i++)
    {
        cout << students[i].roll_no << " " << students[i].grade << endl;
    }
}