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
   ListNode* middle(ListNode* head){
     if(head==nullptr || head->next==nullptr) return head;
     ListNode* fast=head;
     ListNode * slow=head;
     while(fast && fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
     }
     return slow;
   }

   ListNode * Merge(ListNode*headA,ListNode* headB){
    if(headA==nullptr) return headB;
    if(headB==nullptr) return headA;
    ListNode* temp1=headA;
    ListNode* temp2=headB;
    ListNode*dummy =new ListNode(-1);
    ListNode* temp=dummy;
    while(temp1 && temp2){
        if(temp1->val <temp2->val){
            temp->next=temp1;
           temp1=temp1->next;

        }
        else{
            temp->next=temp2;
            temp2=temp2->next;
        }
        temp=temp->next;
    }
    while(temp1){
        temp->next=temp1;
        temp=temp->next;
        temp1=temp1->next;
    }
    while(temp2){
        temp->next=temp2;
        temp=temp->next;
        temp2=temp2->next;
    }
    ListNode* head=dummy->next;
    delete dummy;
    return head;
   }

   ListNode* MergeSort(ListNode* head){
     if(head==nullptr || head->next==nullptr) return head;

     ListNode* middleNode=middle(head);
     ListNode*righthead=middleNode->next;
     middleNode->next=nullptr;
     ListNode* lefthead=MergeSort(head);
      righthead=MergeSort(righthead);
      return Merge(lefthead,righthead);
   }

    ListNode* sortList(ListNode* head) {
        return MergeSort(head);
    }
};