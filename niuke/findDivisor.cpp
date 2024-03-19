/*
 * @Author: KYXxxovo 20236515544@qq.ccom
 * @Date: 2024-03-19 17:52:21
 * @LastEditors: KYXxxovo 20236515544@qq.ccom
 * @LastEditTime: 2024-03-19 18:43:46
 * @FilePath: \C C++\niuke\findDivisor.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// 寻找约数
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num;
    int *count = new int[n];
    for (int i = 0; i < n; i++)
        count[i] = 0;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        num.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j * j <= num[i]; j++)
        {
            if (num[i] % j == 0 && j * j != num[i])
                count[i] += 2;
            if (j * j == num[i])
                count[i]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << count[i] << endl;
    }
    return 0;
}
