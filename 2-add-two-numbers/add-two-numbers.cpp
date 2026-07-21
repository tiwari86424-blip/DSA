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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy =new ListNode(-1);
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* temp=dummy;
        int carry=0;
        while(temp1 && temp2){
            int data=((temp1->val+temp2->val)+carry)%10;
            ListNode* NewNode=new ListNode(data);
            carry=(temp1->val+temp2->val+carry)/10;
            temp->next=NewNode;
            temp=temp->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1){
            int data=((temp1->val)+carry)%10;
            ListNode* NewNode=new ListNode(data);
            carry=(temp1->val+carry)/10;
            temp->next=NewNode;
            temp=temp->next;
            temp1=temp1->next;
        }
        while(temp2){
            int data=((temp2->val)+carry)%10;
            ListNode* NewNode=new ListNode(data);
            carry=(temp2->val+carry)/10;
            temp->next=NewNode;
            temp=temp->next;
            temp2=temp2->next;
        }
        if(carry!=0){
            ListNode* lastNode=new ListNode(carry);
            temp->next=lastNode;
            temp=temp->next;
        }
        temp->next=nullptr;
        ListNode * head=dummy->next;
        delete dummy;
        return head;
    }
};