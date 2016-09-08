/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int tempsum;
        ListNode* result = new ListNode(0);
        ListNode* p = result;
        while(l1!=NULL && l2!=NULL){
            tempsum=l1->val+l2->val+carry;
            if(tempsum>9){
                carry = 1;
                tempsum-=10;
            }
            else{
                carry = 0;
            }
            ListNode* temp = new ListNode(tempsum);
            p->next = temp;
            p=p->next;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL){
            while(l1!=NULL){
                tempsum = l1->val + carry;
                if(tempsum>9){
                    carry = 1;
                    tempsum-=10;
                }
                else{
                    carry = 0;
                }
                ListNode* temp = new ListNode(tempsum);
                p->next = temp;
                p=p->next;
                l1=l1->next;
            }
        }
        if(l2!=NULL){
             while(l2!=NULL){
                tempsum = l2->val + carry;
                if(tempsum>9){
                    carry = 1;
                    tempsum-=10;
                }
                else{
                    carry = 0;
                }
                ListNode* temp = new ListNode(tempsum);
                p->next = temp;
                p=p->next;
                l2=l2->next;
            }
        }
        if(carry){
            ListNode* temp = new ListNode(1);
            p->next = temp;
        }
        return result->next;
    }
};
