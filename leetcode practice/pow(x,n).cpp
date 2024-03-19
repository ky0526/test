/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-13 10:45:17
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-13 11:11:48
 * @FilePath: \C C++\leetcode test\pow(x,n).cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        if (n == -1)
            return 1 / x;
        double res = myPow(x, n / 2);
        res *= res;
        if (n % 2 == 1)
            res *= x;
        else if (n % 2 == -1)
            res *= 1 / x;
        return res;
    }
};

int main()
{
    Solution s;
    double result1 = s.myPow(2, 10);
    cout << "Result of 2^10: " << result1 << endl;

    double result2 = s.myPow(2, -10);
    cout << "Result of 2^-10: " << result2 << endl;

    double result3 = s.myPow(2, 0);
    cout << "Result of 2^0: " << result3 << endl;

    double result4 = s.myPow(3, 3);
    cout << "Result of 3^3: " << result4 << endl;

    double result5 = s.myPow(3, -3);
    cout << "Result of 3^-3: " << result5 << endl;

    return 0;
}