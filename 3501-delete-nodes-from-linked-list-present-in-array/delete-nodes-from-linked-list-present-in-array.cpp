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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==nullptr) return nullptr;
        if(nums.size()==0) return head;
        
        unordered_set<int>nval(nums.begin(), nums.end());
        ListNode *temp=new ListNode(0);
        temp->next=head;
        ListNode *prv=temp;
        // ListNode *back=nullptr, *current=head;
         ListNode *current=head;
        while(current){
                // if(curr->val==nval.find())
                if(nval.find(current->val)!=nval.end()){
                    prv->next=current->next;
                    current=prv->next;
                }
             else{
                        prv=current;   
                        current=current->next;
            }
        }
        return temp->next;   
    }
};