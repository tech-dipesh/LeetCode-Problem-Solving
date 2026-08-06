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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        vector<int>data;
        while(temp!=NULL){
            data.push_back(temp->val);
            temp=temp->next;
        }
        
        while(left<=right){
            swap(data[left-1],data[right-1]);
            left++;
            right--;
        }

        ListNode* ans=new ListNode(data[0]);
        ListNode* temp1=ans;
        for(int i=1;i<data.size();i++){
            temp1->next=new ListNode(data[i]);
            temp1=temp1->next;
        }
        return ans;
    }
};