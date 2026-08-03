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
    ListNode* reverse(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* current=head;
        ListNode* prev=nullptr;
        while(current){
            ListNode* front=current->next;
            current->next=prev;
            prev=current;
            current=front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*head2=slow->next;
        head2=reverse(head2);
        slow->next=nullptr;
        ListNode* temp1=head;
        ListNode* temp2=head2;
        while(temp1 && temp2){
                ListNode* front1=temp1->next;
                ListNode* front2=temp2->next;
                temp1->next=temp2;
                temp2->next=front1;
                temp1=front1;
                temp2=front2;
            
        }
    }
};