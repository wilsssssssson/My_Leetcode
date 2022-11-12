/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* output=new ListNode;
        output->next=head;
        head=output;
        ListNode *p=head->next;
        while(p){
            if(p->val==val){
                head->next=p->next;
                p=head->next;

            }else{
                if(p){
                head=head->next;
                p=head->next;
            }
            }
            
            
        }
        return output->next;

    }
    
};
// @lc code=end

