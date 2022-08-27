/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// struct ListNode {
//     int val;
//     ListNode *next;
//     //ListNode(int x) : val(x), next(NULL) {}
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB){
            return nullptr;
        }
        ListNode *p1,*p2;
        p1=headA;
        p2=headB;
        int length1=0;
        int length2=0;
        while(p1){
            length1++;
            p1=p1->next;
        }
        while(p2){
            length2++;
            p2=p2->next;
        }
        if(length1>=length2){
            while(length1>length2){
                length1--;
                headA=headA->next;
            }
            while(headA&&headA!=headB){
                headA=headA->next;
                headB=headB->next;              
            }
        }else{
            while(length1<length2){
                length1++;
                headB=headB->next;
            }
            while(headA&&headA!=headB){
                headA=headA->next;
                headB=headB->next;              
            }

        }
        if(!headA){
            return nullptr;
        }
        else{
            return headA;
        }
        
    }

};
// @lc code=end

