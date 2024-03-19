/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-14 10:12:24
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-18 15:48:55
 * @FilePath: \C C++\niuke\skewNum.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int skew;
    string str;
    int res = 0;
    vector<int> res_vec;
    vector<int> input_vec;
    while (cin >> skew)
    {
        input_vec.push_back(skew);
    }
    for (int i : input_vec)
    {
        str = to_string(i);
        reverse(str.begin(), str.end());
        int n = str.size();
        for (int i = 0; i < n; i++)
        {
            res += (str[i] - '0') * (pow(2, i + 1) - 1);
        }
        cout << res << endl;
        res = 0;
    }
    return 0;
}