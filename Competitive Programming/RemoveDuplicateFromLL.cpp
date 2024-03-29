class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if( !head || !head->next ){
            return head;
        }

        int temp = head->val;
        ListNode* curr = head->next;
        ListNode* prev = head;

        while(curr != NULL){
            if(curr->val != temp){

                temp = curr->val;
                prev = curr;
                curr = curr->next;

            }
            else{

                prev->next = curr->next;
                curr = prev->next;
                
            }
        }

        return head;
    }
};