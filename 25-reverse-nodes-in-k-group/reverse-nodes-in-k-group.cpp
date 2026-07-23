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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        if(k==1) return head;
        int count=1;
        ListNode*dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* first=head;
         ListNode* current=head;
         ListNode*prev=dummy;
        while(current){
           if(count==k){
               ListNode* last=current;
               current=current->next;
               last->next=nullptr;
               last=reverse(first);

              if(prev) prev->next=last;
              prev=first;
              first->next=current;
              first=current;
              count=1;

           }
           else{
            count++;
            current=current->next;
           }
        }
       head=dummy->next;
       delete dummy;
       return head;

    }
};