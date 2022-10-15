/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    ListNode* start(ListNode* slow,ListNode* head){
        ListNode* meet = slow;
        ListNode* i = head;
        while(i!=meet){
            i = i->next;
            meet = meet->next;
        }
        return meet;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head,*fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast){
                return start(slow,head);
            }
        }
        return NULL;
    }
};