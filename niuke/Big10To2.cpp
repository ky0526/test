/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-18 17:56:14
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-18 18:27:22
 * @FilePath: \C C++\niuke\Big10To2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// 大整数 十进制转化为二进制
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Solution
{
public:
    string Big10To2(string num)
    {
        stack<int> result; // 存放最终二进制结果
        int n = num.size();
        int start = 0;
        while (start < n)
        {
            int remainder, res;
            remainder = 0;
            for (int i = start; i < n; i++)
            {
                res = remainder * 10 + (num[i] - '0');
                if (res == 0 && i == start)
                {
                    start++;
                    continue;
                } // 最高位为0 从下一位开始
                remainder = res % 2;
                res /= 2;
                num[i] = res + '0';
            }
            result.push(remainder);
        }
        string strres;
        while (!result.empty())
        {
            strres += to_string(result.top());
            result.pop();
        }
        if (strres[0] == '0' && strres.size() > 1)
            strres.erase(0, 1);
        return strres;
    }
};

int main()
{
    Solution s;
    string num;
    vector<string> str;
    while (cin >> num)
    {
        if (num == "exit")
            break;
        str.push_back(s.Big10To2(num));
    }

    for (auto i : str)
        cout << i << endl;
    return 0;
}