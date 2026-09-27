class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list2 == nullptr) return list1;
        if(list1 == nullptr) return list2;
        if(list2->val < list1->val) swap(list1, list2);
        ListNode* i = list1; ListNode* j = list2;
        while(i && j){
            if(i->val <= j->val){
                ListNode* temp = nullptr;
                while(i && i->val <= j->val){
                    temp = i;
                    i = i->next;
                }
                if(temp) i = temp;
                temp = i->next;
                i->next = j;
                i = temp;
                continue;
            }else{
                swap(i, j);
            }
        }
        return list1;
    }
};
