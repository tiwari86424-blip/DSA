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
    int powerfun(int count){
        int ans=1;
        for(int i=0;i<count;i++){
            ans*=2;
        }
        return ans;
    }
    // ListNode* reverse(ListNode* head){
    //     if(head==nullptr || head->next==nullptr) return head;
    //     ListNode* current=head;
    //     ListNode* prev=nullptr;
    //     while(current){
    //         ListNode* front=current->next;
    //         current->next=prev;
    //         prev=current;
    //         current=front;
    //     }
    //     return prev;
    // }
    int getDecimalValue(ListNode* head) {
        int count =0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        int sum=0;
        temp=head;
        while(temp){
          sum+=(temp->val*powerfun(count-1));
          count--;
          temp=temp->next;
        }
        return sum;
    }
};