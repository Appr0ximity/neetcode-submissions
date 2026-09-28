class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* i = head;
        ListNode* j = head;
        int k = n;
        while(k){
            j = j -> next;
            k--;
        }
        if(j == nullptr) return head -> next;
        while(j -> next){
            i = i -> next;
            j = j -> next;
        }
        ListNode* temp = i -> next -> next;
        i -> next = temp;
        return head;

    }
};
