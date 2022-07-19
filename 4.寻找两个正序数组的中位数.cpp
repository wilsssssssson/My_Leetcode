/*
 * @Author: mikey.zhaopeng 
 * @Date: 2021-12-21 11:13:55 
 * @Last Modified by: mikey.zhaopeng
 * @Last Modified time: 2021-12-21 11:17:26
 */
#include <vector>
using namespace std;
/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums;

        if (nums1.empty())
        {

            auto nums2front = nums2.begin();

            auto nums2end = nums2.end() - 1;
            while (nums2front < nums2end)
            {
                nums2front++;
                nums2end--;
            }
            if (nums2front == nums2end)
            {
                return *nums2front;
            }
            else
            {
                double n = *nums2front;
                double m = *nums2end;
                return (m + n) / 2;
            }
        }
        if (nums2.empty())
        {
            auto nums1front = nums1.begin();

            auto nums1end = nums1.end() - 1;

            while (nums1front < nums1end)
            {
                nums1front++;
                nums1end--;
            }
            if (nums1front == nums1end)
            {
                return *nums1front;
            }
            else
            {
                double n = *nums1front;
                double m = *nums1end;
                return (m + n) / 2;
            }
        }
        auto nums1front = nums1.begin();
        auto nums2front = nums2.begin();
        auto nums1end = nums1.end() - 1;
        auto nums2end = nums2.end() - 1;

        while ((nums1front <= nums1end) && (nums2front <= nums2end))
        {
            if (*nums1front >= *nums2front)
            {
                nums.push_back(*nums2front);
                nums2front++;
            }
            else
            {
                nums.push_back(*nums1front);
                nums1front++;
            }
        }

        while (nums1front <= nums1end)
        {
            nums.push_back(*nums1front);
            nums1front++;
        }
        while (nums2front <= nums2end)
        {
            nums.push_back(*nums2front);
            nums2front++;
        }

        auto numsfront = nums.begin();
        auto numsend = nums.end() - 1;
        while (numsfront < numsend)
        {
            numsfront++;
            numsend--;
        }
        if (numsfront == numsend)
        {
            return *numsfront;
        }
        else
        {
            double n = *numsfront;
            double m = *numsend;
            return (m + n) / 2;
        }
    }
};
// @lc code=end