/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// #include<vector>
// using namespace std;

// struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return asd(nums,0,nums.size()-1);

    }

    TreeNode* asd(vector<int>& nums,int left,int right){
        TreeNode* root=new TreeNode;
        if(left>right){
            return nullptr;
        }else{
            int middle=(right+left)/2;
            root->val=nums[middle];
            root->left=asd(nums,left,middle-1);
            root->right=asd(nums,middle+1,right);
            
        }

        return root;

        

    }
};
// @lc code=end

