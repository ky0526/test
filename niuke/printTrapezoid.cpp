/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-19 16:29:05
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-19 16:39:51
 * @FilePath: \C C++\niuke\printTrapezoid.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int h;
    cin >> h; // 每行有h + 2*（h-1） = 3h - 2个字符，第i行有 h + 2 * i 个 ‘*’ ，有2h - 2 - 2 * i 个 ‘ ’
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < 2 * (h - i - 1); j++)
            cout << " ";
        for (int j = 0; j < 2 * i + h; j++)
            cout << "*";
        cout << endl;
    }
}