/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if (!head) {
//             return head;
//         }
        
//         ListNode* dummy = new ListNode(0, head);

//         ListNode* cur = dummy;
//         while (cur->next && cur->next->next) {
//             if (cur->next->val == cur->next->next->val) {
//                 int x = cur->next->val;
//                 while (cur->next && cur->next->val == x) {
//                     cur->next = cur->next->next;
//                 }
//             }
//             else {
//                 cur = cur->next;
//             }
//         }

//         return dummy->next;
//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==nullptr){
            return nullptr;
        }
        
        ListNode* aaa=new ListNode;
        aaa->next=head;
        ListNode* p=head;
        int nums[200]={0};
        while(p->next!=nullptr){
            nums[p->val+100]++;
            p=p->next;
        }
        nums[p->val+100]++;
        ListNode* pre=aaa;


        while(pre->next&&pre->next->next){
            if(nums[pre->next->val+100]>1){
                pre->next=pre->next->next;
                
            }else{
                pre=pre->next;
            }
            
        }
        if(nums[pre->next->val+100]>1){
            pre->next=nullptr;
        }
        return aaa->next;
    }
};

// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==nullptr){
//             return nullptr;
//         }
//         if(head->next==nullptr){
//             return head;
//         }
//         ListNode* p=head;
//         ListNode* pre=head;
//         int nums[300]={0};
//         while(p->next!=nullptr){
//             nums[p->val]++;
//             p=p->next;
//         }
//         nums[p->val]++;


//         ListNode* aaaa=new ListNode;
//         aaaa->next=pre;

//         while(nums[pre->val]>1||pre->next!=nullptr){
//             aaaa=pre;
//             pre=pre->next;

//         }
//         if(nums[pre->val]>1&&pre->next==nullptr){
//             return nullptr;
//         }

//         if(pre->next!=nullptr){
//             p=pre->next;
//         }
//         while(p->next!=nullptr){
//             if(nums[p->val]>1){
//                 pre->next=p->next;
//                 p=pre->next;
//             }
//             if(p->next!=nullptr){
//             pre=p;
//             p=p->next;    
//             }else{
//                 break;
//             }

//         }

//         if(nums[p->val]>1){
//             pre->next=nullptr;
//         }

//         head=aaaa->next;
//         return head;
        


//     }
// };
// @lc code=end

