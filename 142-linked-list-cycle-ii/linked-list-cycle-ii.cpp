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
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* slow=head, *fast=head, *temp=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                // if appear move temp until it doesn't come there.
                while(temp!=slow){
                    slow=slow->next;
                    temp=temp->next;
                }
                return temp;
            }
        }
        return nullptr;
    }
};