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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode*current=head;
        ListNode* prev=dummy;
        while(current){
            if(current->val==val){
             ListNode* temp=current;
             prev->next=current->next;
             current=current->next;
             delete temp;
            }
            else{
                prev=current;
                current=current->next;
            }
        }
      head=dummy->next;
      return head;
    }
};