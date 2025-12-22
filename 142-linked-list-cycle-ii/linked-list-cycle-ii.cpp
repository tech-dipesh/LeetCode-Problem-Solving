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
    ListNode *detectCycle(ListNode *head) {
    //    Base Case:
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    ListNode* temp=head, *slow=head, *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            while(slow!=temp){
                slow=slow->next;
                temp=temp->next;
            }
            return temp;
        }
    }
    // If no linked list no cycle found
    return nullptr;
    }
};