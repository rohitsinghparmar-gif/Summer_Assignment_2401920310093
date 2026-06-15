class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL){
            return false;
        }
        ListNode* slow;
        ListNode* fast;
        fast=slow=head;
        while(fast!=NULL &&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
            
        }return false;
    }
};
