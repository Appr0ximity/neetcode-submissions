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
    void reorderList(ListNode* head) {
        ListNode* i = head;
        ListNode* j = head;
        while(j -> next){
            i = i -> next;
            if(j -> next -> next){
                j = j -> next -> next;
            }else{
                j = j -> next;
            }
        }
        j = i -> next;
        i -> next = nullptr;
        i = head;
        j = reverseList(j);
        while(j){
            ListNode* temp1;
            ListNode* temp2;
            temp1 = i -> next;
            temp2 = j -> next;
            i -> next = j;
            j -> next = temp1;
            i = temp1;
            j = temp2;
        }
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
