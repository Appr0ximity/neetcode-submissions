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
        unordered_map<Node*, Node*> mp;
        Node* i = head;
        while(i){
            Node* node = new Node(i->val);
            mp[i] = node;
            i = i->next;
        }
        i = head;
        Node* j = mp[i];
        while(i){
            mp[i]->next = mp[i->next];
            mp[i]->random = mp[i->random];
            i = i-> next;
        }
        return j;
    }
};
