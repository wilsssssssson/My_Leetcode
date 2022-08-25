/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return 0;
        }
        int sum=root->val;
        int out=0;
        findtarget(root,targetSum,sum,out);
        return out;

    }
    void findtarget(TreeNode* root,int &targetsum,int &sum,int &out){
        if(root->left){
            int m=sum;
            m=m+root->left->val;
            findtarget(root->left,targetsum,m,out);
        }
        if(root->right){
            int n=sum;
            n=n+root->right->val;
            findtarget(root->right,targetsum,n,out);
        }
        if(!root->left&&!root->right){
            if(sum==targetsum){
                out=1;
            }
        }

    }
};
// @lc code=end

