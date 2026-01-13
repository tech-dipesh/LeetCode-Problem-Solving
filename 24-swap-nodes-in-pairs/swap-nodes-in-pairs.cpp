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
    ListNode* swapPairs(ListNode* head) {
        // ListNode *first=nullptr, *second=head;
        if(!head || !head->next) return head;
        // it will start from teh third node wit the recursive appraoch:
        ListNode *left=swapPairs(head->next->next);
       ListNode *temp=head->next;
       temp->next=head;
    //    it will swap two first go to second and second go to first.
       head->next=left;
       return temp;
    }
};