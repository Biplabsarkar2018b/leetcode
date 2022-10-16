/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> m;
        Node* res = new Node(0);
        Node* temp1 = res;
        Node* head1 = head;
        
        while(head1){
            temp1->next = new Node(head1->val);
            m[head1] = temp1->next;
            temp1 = temp1->next;
            head1 = head1->next;
        }
        
        Node* head2 = res->next;
        head1 = head;
        while(head2){
            head2->random = m[head1->random];
            head2 = head2->next;
            head1 = head1->next;
        }
        return res->next;
    }
};