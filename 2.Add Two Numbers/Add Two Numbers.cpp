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

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

//My initial Solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1,*t2;
        ListNode* out = NULL;
        ListNode* next = NULL;
        t1 = l1;
        t2 = l2;
        int add1 = 0;
        int add2 = 0;
        int c = 0;
        int result = 0;
        while(t1 != NULL || t2 != NULL) {
            if(t1 != NULL) {
                add1 = t1->val;
                t1 = t1->next;
            } else {
                add1 =0;
            }
           if(t2 != NULL) {
                add2 = t2->val;
                t2 = t2->next;
            } else {
                add2 =0;
            }
            result = add1+add2+c;
            c = result/10 == 1 ? 1 : 0;
            result = result % 10;
            if(out == NULL) {
                next = new ListNode(result,nullptr);
                out = next;
                
            }
            else {
                ListNode* tmp = new ListNode(result,nullptr);
                next->next = tmp;
                next = tmp;
            }
 
        }
        if(c == 1)
        {
                ListNode* tmp = new ListNode(1,nullptr);
                next->next = tmp;
                next = tmp;
        }
        return out;
        
    }
};

// Simpler Solution
class Solution1 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = nullptr;
        ListNode **rs = &result;
        int sum = 0;
        while(l1 != nullptr || l2 != nullptr || sum > 0 ) {  
            if(l1 != nullptr)
            {
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr) 
            {
                sum+=l2->val;
                l2 = l2->next;
            }
            (*rs) = new ListNode(sum%10);
            sum /=10;
            rs = &(*rs)->next;
        }
        return result;
       
    };
};