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
    ListNode* reverse(ListNode*head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* current=head;
        ListNode* prev=nullptr;
        while(current){
            ListNode* front =current->next;
            current->next=prev;
            prev=current;
            current=front;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        int count=1;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* temp=head;
        ListNode* beforetemp=dummy;
        while(count<left){
          beforetemp=temp;
          temp=temp->next;
          count++;
        }
        ListNode* leftnode=temp;
        while(count<right){
           temp=temp->next;
           count++;
        }
        ListNode* rightnode=temp;
        temp=rightnode->next;
        rightnode->next=nullptr;
        rightnode=reverse(leftnode);
        beforetemp->next=rightnode;
        leftnode->next=temp;
        head=dummy->next;
        delete dummy;
        return head;
        
    }
};