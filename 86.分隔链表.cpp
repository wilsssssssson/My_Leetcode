/*
 * @lc app=leetcode.cn id=86 lang=cpp
 *
 * [86] 分隔链表
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
        ListNode* partition(ListNode* head, int x) {
            if (!head) {
                return nullptr;
            }
            ListNode* small;
            ListNode* p;
            ListNode* begin = new ListNode;
            begin->val = -1;
            begin->next = head;
            head = begin;
            small = head;
            p = head;
            while (p->next) {
               
                if (p->next->val < x) {
                    insertlistnode(small, p,x);
                    
                }
                else {
                    p = p->next;
                }
                
                
            }
           
            return head->next;

        }
        void insertlistnode(ListNode* &p1, ListNode* &p2,int x) {//把P2的下一个节点插入P1之前
            ListNode* a;
            if (p1->val == p2->val) {
                p1 = p1->next;
                p2 = p2 -> next;
            }
            else {
                if (p2->next->next) {
                    a = p1->next;
                    p1->next = p2->next;
                    p2->next = p2->next->next;
                    p1->next->next = a;
                }
                else {
                    a = p1->next;
                    p1->next = p2->next;
                    p1->next->next = a;
                    p2->next = NULL;
                }

                while(p1->next->val<x){
                    p1=p1->next;
                }
            }
            

            
     
        }
    };
// @lc code=end

