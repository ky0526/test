#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
  string addBinary(string a, string b)
  {
    int carry = 0;
    int n = a.size();
    if (n < b.size())
    {
      n = b.size();
      for (int i = a.size(); i < n; i++)
      {
        a.push_back('0');
        reverse(b.begin(), b.end());
      }
    }
    else if (n > b.size())
    {
      for (int i = b.size(); i < n; i++)
      {
        b.push_back('0');
        reverse(a.begin(), a.end());
      }
    }
    else if (b.size() == a.size())
    {
      reverse(a.begin(), a.end());
      reverse(b.begin(), b.end());
    }
    string c;
    for (int i = 0; i < n; i++)
    {
      int s1 = a[i] - '0';
      int s2 = b[i] - '0';
      int s3 = s1 + s2 + carry;
      int temp = s3 % 2;
      char tempc = temp + '0';
      carry = (s1 + s2 + carry) / 2;
      c.push_back(tempc);
    }
    if (carry)
      c.push_back('1');
    reverse(c.begin(), c.end());
    return c;
  }
};

int main()
{
  Solution s;

  string a = "1";
  string b = "111";
  string result = s.addBinary(a, b);
  cout << "Result: " << result << endl; // 输出：1000

  a = "1010";
  b = "1011";
  cout << "Result: " << result << endl; // 输出：10101

  a = "111";
  b = "111";

  result = s.addBinary(a, b);
  cout << "Result: " << result << endl; // 输出：1110

  a = "1010";
  b = "1";
  result = s.addBinary(a, b);
  cout << "Result: " << result << endl; // 输出：1011

  a = "100";
  b = "100";
  result = s.addBinary(a, b);
  cout << "Result: " << result << endl; // 输出：1000

  return 0;
}
