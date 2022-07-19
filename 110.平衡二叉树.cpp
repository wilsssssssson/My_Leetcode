/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
//};
class Solution {////通过214个测试案例
public:
    int left=0;
    int right=0;
    bool isBalanced(TreeNode* root) {
        
        if(!root){
            return 1;
        }else{
            if(height(root->right)-height(root->left)>1||height(root->right)-height(root->left)<-1){
                return 0;
            }else{
                return isBalanced(root->left)&&isBalanced(root->right);//同时考虑，当两子树都空时也应该返回
                
            }
        }
        
        
        

        


    }
    int height(TreeNode* root) {//树的高度
        if (root == NULL) {
            return 0;
        } else {
            return max(height(root->left), height(root->right)) + 1;//
        }
    }


};

// class Solution {
// public:
//     int height(TreeNode* root) {
//         if (root == NULL) {
//             return 0;
//         } else {
//             return max(height(root->left), height(root->right)) + 1;
//         }
//     }

//     bool isBalanced(TreeNode* root) {
//         if (root == NULL) {
//             return true;
//         } else {
//             return abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//         }
//     }
// };

// @lc code=end

