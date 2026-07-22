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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        Node* dummyhead = new NodeE(-1);
        Node* curr = dummyhead;
        Node* temp1 = l1;
        Nodee* temp2 = l2;
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            int sum = carry;
            if(temp1) sum = sum + temp1;
            if(temp2) sum = sum + temp2;
            Node* newNode = new Node(sum % 10);
            carry = sum / 10;
            curr->next = newNode;
            curr = curr->next;
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;

        }

        if(carry){
            Node*newNode = newNode(carry);
            curr->next = newNode;
        }

        return dummyhead->next;
        
        
    }
};