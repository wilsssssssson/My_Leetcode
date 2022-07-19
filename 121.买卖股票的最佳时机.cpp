/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时朄1�7
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=prices[0];
        for(int i:prices){
            if(minprice>i){
                minprice=i;
            }
            if(maxprofit<i-minprice){
                maxprofit=i-minprice;
            }

        }
        return maxprofit;








        

    }
};
// @lc code=end

