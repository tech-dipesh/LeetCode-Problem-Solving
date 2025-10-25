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
        Node* temp=head;
        // if(head){
        //     temp=head;
        // }
        unordered_map<Node*, Node*>mp;
        //Adding to the hashmap:
        while(temp){
            Node* dummy=new Node(temp->val);
            mp[temp]=dummy;
            temp=temp->next;
        }
    temp=head;
    while(temp){
        Node* deepCopyNode=mp[temp];
        // Should point the deepCopy next pointer and random pointer to original Node.
        deepCopyNode->next=mp[temp->next];
        deepCopyNode->random=mp[temp->random];
        temp=temp->next;
            }
            return mp[head];
    }
};