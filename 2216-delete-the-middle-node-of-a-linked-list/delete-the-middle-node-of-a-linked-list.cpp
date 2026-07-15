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
    ListNode* deleteMiddle(ListNode* head) {
           if(head==nullptr || head->next==nullptr) return nullptr;
     ListNode* dummy=new ListNode(0);
     dummy->next=head;
     ListNode* fast=head;
     ListNode* slow=dummy;
     while(fast && fast->next){
        fast=(fast->next)->next;
        slow=slow->next;
     }
     ListNode* temp=slow->next;
     slow->next=temp->next;
     delete temp;
     head=dummy->next;
     return head;
     
    }
};