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
        ListNode* head = new ListNode(0);
        ListNode* curr = head;
        int x,y,carry=0;

        while(l1!=nullptr || l2!=nullptr){
            if(l1!=nullptr) x = l1->val;
            else x=0;

            if(l2!=nullptr) y = l2->val;
            else y = 0;

            int sum = carry+x+y;
            carry = sum/10;
            ListNode* temp = new ListNode(sum%10);
            curr->next = temp;
            curr= curr->next;

            if(l1!=nullptr) l1=l1->next;
            if(l2!=nullptr) l2=l2->next;
        }

        if(carry>0){
            ListNode* temp = new ListNode(carry);
            curr->next=temp;
        }

        return head->next;
    }
};