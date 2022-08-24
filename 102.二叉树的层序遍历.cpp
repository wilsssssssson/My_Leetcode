/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
// #include<queue>
// using namespace std;
// struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
class Solution {//问题是怎么确定节点的层数
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
        vector<vector<int>> output;//返回的
        queue<TreeNode*> queue1;//辅助队列
        queue<TreeNode*> queue2;
        if(root==nullptr){
            return output;
        }
        queue1.push(root);        
        while(!queue1.empty()||!queue2.empty()){
            vector<int> a;
            if(queue1.empty()){
                creatqueue(queue2,queue1,a,output);
            }else{
                creatqueue(queue1,queue2,a,output);
            }
            
            

        }
        return output;

    }
    void creatqueue(queue<TreeNode*> &queue1,queue<TreeNode*> &queue2,vector<int> &a,vector<vector<int>> &output){
        while(!queue1.empty()){
            TreeNode* temp=queue1.front();
            a.push_back(temp->val);
            if(temp->left){
                queue2.push(temp->left);
            }
            if(temp->right){
                queue2.push(temp->right);
            }
           queue1.pop();

        }
        output.push_back(a);
    }

    
};
// @lc code=end

