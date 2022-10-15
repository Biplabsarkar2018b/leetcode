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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> v;
        ListNode* t = head;
        while(t){
            v.push_back(t->val);
            t = t->next;
        }
        
        int first = v[k-1];
        v[k-1] = v[v.size()-k];
        v[v.size()-k] = first;
        
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        for(auto it:v){
            ListNode* n = new ListNode(it);
            temp->next = n;
            temp = temp->next;
        }
        return dummy->next;
    }
};