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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // The edge case either one can empty
        if(!list1) return list2;
        if(!list2) return list1;
    
        // Storing the final output
        ListNode *original=new ListNode();
        ListNode *temp=original;
        while(list1 && list2){
            if(list1->val<list2->val){
                temp->next=list1;
                temp=list1;
                list1=list1->next;
            }
           else{
                temp->next=list2;
                temp=list2;
                list2=list2->next;
            }
        }
        // at last any node can be left to pick so addd rest of the node on the result Node.
        if(list1){
            temp->next=list1;
        }
        else{
            temp->next=list2;
        }
        return original->next;
    }
};