// //Definition for singly-linked list.
//  struct ListNode{
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0; 
        ListNode* l3 = NULL, *temp; 

        while(l1 != NULL || l2 != NULL || carry){
            int sum = 0; 

            if(l1!=NULL){
                sum += l1->val; 
                l1 = l1->next; 
            }
            if(l2!=NULL){
                sum += l2->val; 
                l2 = l2->next;
            }

            sum += carry; 
            carry = sum/10; 

            if(l3==NULL){
                l3 = new ListNode(sum%10); 
                temp = l3; 
            }
            else{
                ListNode* p = new ListNode(sum%10); 
                temp->next = p; 
                temp = temp->next;
            } 
        }
        return l3; 
    }
};
