/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
// 
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }

        if(head->next==nullptr){
            return head;
        }
        ListNode* pre=head;
        ListNode* p;
        
        if(head->next==nullptr){
            return head;
        }else{
            p=head->next;
        }
        pre->next=p->next;
        p->next=pre;
        head=p;
        while(pre->next!=nullptr){
            ListNode*aaa=pre;
            pre=pre->next;
            if(pre->next!=nullptr){
                p=pre->next;
            }else{
                break;
            }



            pre->next=p->next;
            p->next=pre;
            aaa->next=p;
        }
        return head;



    }
};
// @lc code=end

