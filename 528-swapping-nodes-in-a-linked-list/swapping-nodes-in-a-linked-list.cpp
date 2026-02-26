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
    ListNode* swapNodes(ListNode* head, int k) {
        //Swap value logic
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* temp=head, *first=head, *slow=head, *fast=head;

        // Torotoise Algo to find last:
        for(int i=1;i<k;i++){
            first=first->next;
        }
        for(int i=0;i<k;i++){
            fast=fast->next;
        }
        while(fast){
            slow=slow->next;
            fast=fast->next;
        }
            swap(first->val, slow->val);
        return head;
    }
};