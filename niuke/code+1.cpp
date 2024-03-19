/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-18 11:19:18
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-18 11:32:05
 * @FilePath: \C C++\test_24_03_18\code+1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str0;
    getline(cin, str0);
    for (int i = 0; i < str0.size(); i++)
    {
        if ((str0[i] >= 'a' && str0[i] < 'z') || (str0[i] >= 'A' && str0[i] < 'Z'))
            str0[i] = str0[i] + 1;
        else if (str0[i] == 'z')
            str0[i] = 'a';
        else if (str0[i] == 'Z')
            str0[i] = 'A';
    }
    cout << str0 << endl;
}