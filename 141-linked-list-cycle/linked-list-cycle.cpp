/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Iterative Approach:
        unordered_set<ListNode*>mp;
        ListNode* temp=head;
        while(temp){
            if(mp.count(temp)){
                return true;
            }
            mp.insert(temp);
            temp=temp->next;
        }
        return false;
    }
};