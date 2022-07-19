/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int output=0;
        for(int i:nums){
            output=i^output;   
        }
        return output;
    }
};
// @lc code=end

