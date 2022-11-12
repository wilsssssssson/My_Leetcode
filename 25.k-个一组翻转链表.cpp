/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
 
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* begin=new ListNode;
        begin->next=head;
        head=begin;
        int length=0;
        while(begin->next){
            begin=begin->next;
            length++;
        }
        begin=head;
        for(int i=0;i<length/k;i++){
            partreserve(begin,k);
        }
        return head->next;
    }
    void partreserve(ListNode* &p,int k){
        ListNode* p1,*p2;
        p1=p->next;
        for(int i=1;i<k;i++){
            if(p1->next->next){
                p2=p->next;
                p->next=p1->next;
                p1->next=p1->next->next;
                p->next->next=p2;
                
            }else{
                p2=p->next;
                p->next=p1->next;
                p->next->next=p2;
                p1->next=nullptr;
            }
            
        }
        p=p1;
    }
};
// @lc code=end

