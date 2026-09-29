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
        ListNode* l3 = nullptr;
        ListNode* k = nullptr;
        ListNode* i = l1;
        ListNode* j = l2;
        int carry = 0;
        while(i && j){
            int sum = i -> val + j -> val + carry;
            if(sum / 10) carry = 1; 
            else carry = 0;
            if(l3 == nullptr){
                l3 = new ListNode(sum % 10);
                k = l3;
            }
            else {
                k -> next = new ListNode(sum % 10);
                k = k -> next;
            }
            i = i -> next;
            j = j -> next;
        }
        if(j) i = j;
        while(i){
            int sum = i -> val + carry;
            if(sum / 10) carry = 1; 
            else carry = 0;
            k -> next = new ListNode(sum % 10);
            k = k -> next;
            i = i -> next;
        }
        if( carry != 0){
            k -> next = new ListNode(carry);
        }
        return l3;
    }
};
