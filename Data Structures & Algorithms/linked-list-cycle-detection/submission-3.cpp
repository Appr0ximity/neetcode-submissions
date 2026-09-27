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
    bool hasCycle(ListNode* head) {
        ListNode* i = head;
        ListNode* j = head;
        while(i && j){
            if(i -> next) i = i -> next;
            else return false;
            if(j -> next && j -> next -> next) j = j -> next -> next;
            else return false;
            if(i  == j) return true;
        }
        return false;
    }
};
