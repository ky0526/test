/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-18 16:31:05
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-19 16:47:38
 * @FilePath: \C C++\niuke\10To2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    string convertion(int num)
    {
        string res;
        if (num == 0)
            return "0";
        while (num)
        {
            int temp = num % 2;
            res += to_string(temp);
            num /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution s;
    int num;
    vector<string> res;
    while (cin >> num)
    {
        res.push_back(s.convertion(num));
    }
    for (auto i : res)
    {
        cout << i << endl;
    }
    /*cout << s.convertion(2) << endl; // 10
    cout << s.convertion(10) << endl; // 1010
    cout << s.convertion(14) << endl; // 1110
    cout << s.convertion(42) << endl; // 101010
    cout << s.convertion(85) << endl; // 1010101*/
    return 0;
}