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
        if (head==nullptr || head->next==nullptr) return head;
        ListNode* current=head;
        ListNode* previous=nullptr;
        while(current){
            ListNode * temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        return previous;
    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next== nullptr) return true;
        ListNode* fast=head;
        ListNode*slow=head;
        while(fast && fast->next && fast->next->next ){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* NewHead=reverse(slow->next);
        ListNode* ptr1=head;
        ListNode * ptr2=NewHead;
        while(ptr2){
            if(ptr1->val!=ptr2->val){
                reverse(NewHead);
                return false;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        reverse(NewHead);
        return true;
    }
};