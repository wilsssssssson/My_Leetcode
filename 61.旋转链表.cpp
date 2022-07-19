/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
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
//  };
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr){
            return nullptr;
        }
        int longofL=1;
        ListNode*count=head;
        while(count->next!=nullptr){
            count=count->next;
            longofL++;
        }
        ListNode*pre=head;
        while(k>=longofL){
            k-=longofL;
        }
        if(k==0){
            return head;
        }
        for(int i=0;i<longofL-k-1;i++){
            pre=pre->next;
        }
        
        count->next=head;
        ListNode* output=pre;
        pre=pre->next;
        output->next=nullptr;
        return pre;


    }
};
// @lc code=end

