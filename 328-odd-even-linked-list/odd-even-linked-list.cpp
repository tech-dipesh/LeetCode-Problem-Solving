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
    ListNode* oddEvenList(ListNode* head) {
        // More brute:
        // Brute:
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        vector<int>vt;
        ListNode *temp=head;
        while(temp && temp->next){
            vt.push_back(temp->val);
            temp=temp->next->next;
        }
        // There maybe some element left on odd length:
        if(temp){
            vt.push_back(temp->val);
        }
        temp=head->next;
        while(temp && temp->next){
            vt.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp){
            vt.push_back(temp->val);
        }
        temp=head;
        for(int i=0;i<vt.size();i++){
            temp->val=vt[i];
            temp=temp->next;
        }
        return head;
    }
};