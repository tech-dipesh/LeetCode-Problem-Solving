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
    //     if(head->next==nullptr) return false;
    //     ListNode *p, *q;
    //     p=q=head;
    //     do{
    //         p=p->next;
    //         q=q->next;
    //         q=q?q->next: q;
    //     } while(p&& q && p!=q);
    // return p==q ?true:false;
    // unordered_set<ListNode*>res;
    // while(head){
    //     if(res.count(head)) return true;
    //     res.insert(head);
    //     head=head->next;
    // }
    // return false;
    ListNode *slow=head, *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
    }
};