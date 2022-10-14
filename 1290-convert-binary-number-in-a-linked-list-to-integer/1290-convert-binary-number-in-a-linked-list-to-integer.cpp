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
//     int rev(int i){
//         int res = 0;
//         while(i){
//             int rem = i%10;
//             res = res*10+rem;
//             i/=10;
//         }
        
//         return res;
//     }
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int res = 0;
        int nodes = 0;
        while(temp->next){
            nodes++;
            temp = temp->next;
        }
        
        ListNode* i = head;
        while(i){
            res = res + (pow(2,nodes) * i->val);
            i = i->next;
            nodes--;
        }
        
        return res;
        
        
    }
};