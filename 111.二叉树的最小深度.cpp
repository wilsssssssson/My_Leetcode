/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int output=1804;
        int depth=1;
        findmindepth(root,depth,output);
        return output;

    }
    void findmindepth(TreeNode* root,int &depth,int &output){
        if(root->left){
            int m=depth;
            m++;
            
            findmindepth(root->left,m,output);
        }
        if(root->right){
            
            
            int n=depth;n++;
            findmindepth(root->right,n,output);
        }
        if(!root->left&&!root->right){
            depth<output?(output=depth):1;
        }


    }
};
// @lc code=end

