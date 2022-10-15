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
class Solution {
public:
    
    ListNode* rev(ListNode* head){
        if(!head || !head->next) return head;
        
        ListNode* newhead = rev(head->next);
        ListNode* headnext = head->next;
        head->next = NULL;
        headnext->next = head;
        return newhead;
    }
    
    
    ListNode* add(ListNode* first,ListNode* second){
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0,sum,digit;
        while(first || second || carry){
            sum = 0;
            if(first){
                sum+=first->val;
                first = first->next;
            }
            if(second){
                sum+=second->val;
                second = second->next;
            }
            
            sum+=carry;
            digit = sum%10;
            carry = sum/10;
            temp->next = new ListNode(digit);
            temp = temp->next;
        }
        return dummy->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = rev(l1);
        l2 = rev(l2);
        
        //adding---
        ListNode* res = add(l1,l2);
        
        //reverseing res----
        res = rev(res);
        
        return res;
    }
};