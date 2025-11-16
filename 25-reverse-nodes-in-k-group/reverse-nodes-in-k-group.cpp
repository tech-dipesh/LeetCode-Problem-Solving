/**
 * Definition for singly-linked list.
 * struct Node {
 *     int val;
 *     Node *next;
 *     Node() : val(0), next(nullptr) {}
 *     Node(int x) : val(x), next(nullptr) {}
 *     Node(int x, Node *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        // Reverse the linked list no extra space:
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* temp=head, *previous=nullptr;
        while(temp){
            ListNode* front=temp->next;
            temp->next=previous;
            previous=temp;
            temp=front;
        }
        return previous;
    }
    // move temp point to the kth group
    ListNode* kthGroup(ListNode* head, int k){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        k--;
        ListNode* temp=head;
        while(k>0 && temp){
            k--;
            temp=temp->next;
        }
        return temp;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k<0){
            return head;
        }   
        ListNode* temp=head, *previous=nullptr;
        while(temp){
            ListNode* kMove=kthGroup(temp, k);
            // If that a last element:
            if(kMove==nullptr){
                if(previous) previous->next=temp;
                break;
            }
            // break a node and set next to nullptr
            ListNode* nextMove=kMove->next;
            kMove->next=nullptr;
            // Now reverse the independed LL:
            reverseLL(temp);
            // Now connect the link:
            if(temp==head){
                head=kMove;
            }
            else{
                previous->next=kMove;
            }
            previous=temp;
            temp=nextMove;
        }
        return head;
    }
};