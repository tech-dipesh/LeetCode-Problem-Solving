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
     int gcd(int a, int b){
        while(b> 0){
            // find a value,
            int temp=b;
            // a=b;
            b=a%b;
            a=temp;            
        }
        return a;
     }
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* curr=head;
        while(curr->next){
            int n1=curr->val;
            int n2=curr->next->val;

            // ListNode(gcd, (n1, n2), curr->next);
            // curr=curr->next->next;
            
            // create a new node
            ListNode* newNode=new ListNode (gcd(n1, n2));
    // for understand updaint
            newNode->next=curr->next;
            curr->next=newNode;
            curr=newNode->next;
        }
        return head;
    }
};