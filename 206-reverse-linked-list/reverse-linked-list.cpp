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
    ListNode* reverseList(ListNode* head) {
    // Must check edge case every time. o(2n) and o(n)
        if(head==nullptr || head->next==nullptr){
            return head;
        }
    ListNode *temp=head;
    stack<ListNode *>st;
    while(temp && temp->next){
        st.push(temp);
        temp=temp->next;
    }
    head=temp;

    while(!st.empty()){
        temp->next=st.top();
        temp=temp->next;
        st.pop();
    }
    temp->next=nullptr;
    return head;
    }
};