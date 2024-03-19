/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-13 10:19:21
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-13 10:43:33
 * @FilePath: \C C++\leetcode test\StrMultiply.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int len1 = num1.size(), len2 = num2.size();
        double inum1 = 0, inum2 = 0;
        int weight = 1;
        for (int i = len1 - 1; i >= 0; i--)
        {
            inum1 += (num1[i] - '0') * weight;
            weight *= 10;
        }
        weight = 1;
        for (int i = len2 - 1; i >= 0; i--)
        {
            inum2 += (num2[i] - '0') * weight;
            weight *= 10;
        }
        double result = inum1 * inum2;
        return to_string(result);
        // return result;
    }
};

string test_case1()
{
    Solution s;
    string num1 = "123", num2 = "456";
    string result = s.multiply(num1, num2);
    return result;
}

string test_case2()
{
    Solution s;
    string num1 = "0", num2 = "123";
    string result = s.multiply(num1, num2);
    return result;
}

string test_case3()
{
    Solution s;
    string num1 = "123", num2 = "0";
    string result = s.multiply(num1, num2);
    return result;
}

string test_case4()
{
    Solution s;
    string num1 = "1", num2 = "1";
    string result = s.multiply(num1, num2);
    return result;
}

string test_case5()
{
    Solution s;
    string num1 = "123456789", num2 = "987654321";
    string result = s.multiply(num1, num2);
    return result;
}

int main()
{
    Solution s;
    string result1 = test_case1();
    string result2 = test_case2();
    string result3 = test_case3();
    string result4 = test_case4();
    string result5 = test_case5();

    cout << "Test case 1: " << result1 << endl;
    cout << "Test case 2: " << result2 << endl;
    cout << "Test case 3: " << result3 << endl;
    cout << "Test case 4: " << result4 << endl;
    cout << "Test case 5: " << result5 << endl;

    return 0;
}