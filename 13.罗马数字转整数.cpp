/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 * I             1
V             5
X             10
L             50
C             100
D             500
M             1000
 */

// @lc code=start
#include <string>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int sum = 0;
        int number = s.size();
        for (int i = 0; i < number; i++)
        {
            char a = s[i];

            switch (a)
            {
            case 'M':
                sum += 1000;
                break;
            case 'D':
                sum += 500;
                break;
            case 'C':
                if (s[i + 1] == 'M')
                {
                    sum += 900;
                    i++;
                }
                else
                {
                    if (s[i + 1] == 'D')
                    {
                        sum += 400;
                        i++;
                    }
                    else
                    {
                        sum += 100;
                    }
                }
                break;
            case 'L':
                sum += 50;
                break;
            case 'X':
                if (s[i + 1] == 'C')
                {
                    sum += 90;
                    i++;
                }
                else
                {
                    if (s[i + 1] == 'L')
                    {
                        sum += 40;
                        i++;
                    }
                    else
                    {
                        sum += 10;
                    }
                }
                break;
            case 'V':
                sum += 5;
                break;
            case 'I':
                if (s[i + 1] == 'X')
                {
                    sum += 9;
                    i++;
                }
                else
                {
                    if (s[i + 1] == 'V')
                    {
                        sum += 4;
                        i++;
                    }
                    else
                    {
                        sum += 1;
                    }
                }
                break;
            default:
                break;
            }
        }
        return sum;
    }
};
