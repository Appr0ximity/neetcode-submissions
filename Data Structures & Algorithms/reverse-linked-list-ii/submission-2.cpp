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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count = 1;
        ListNode* front = nullptr;
        ListNode* back = nullptr;
        ListNode* i = head;
        ListNode* pre = head;
        while(front == nullptr || back == nullptr){ 
            if(count == left) front = i;
            if(count == right) back = i;
            if(front == nullptr) pre = i;
            i = i -> next;
            count ++;
        }
        ListNode* post = back -> next;
        ListNode* ans = reverseList(front, back, post);
        pre -> next = ans;
        front -> next = post;
        if(left == 1) return ans;
        return head;
        
    }
    ListNode* reverseList(ListNode* front, ListNode* back, ListNode* post) {
        ListNode* prev = nullptr;
        ListNode* curr = front;

        while(curr != post){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};