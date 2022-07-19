/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head->next){
            return head;
        }
        if(left==right){
            return head;
        }
        ListNode* output=new ListNode;
        output->next=head;
        ListNode* leftpointer=output;
        ListNode* rightpointer=head;

        for(int i=1;i<left;i++){
            leftpointer=leftpointer->next;
        }
        rightpointer=leftpointer->next;
        ListNode* asd=leftpointer->next;
        while(left<right){
            leftpointer->next=rightpointer->next;
            rightpointer->next=rightpointer->next->next;
            leftpointer->next->next=asd;
            asd=leftpointer->next;
            left++;


        }
            return output->next;



    }
    
};
// @lc code=end

