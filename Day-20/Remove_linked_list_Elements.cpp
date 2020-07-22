class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val)
        {
            head = head->next;
        }
        
        ListNode* current_node = head;
        
        while(current_node && current_node->next)
        {
            if(current_node->next->val==val)
            {
                current_node->next=current_node->next->next;
            }
            else
            {
                current_node = current_node->next;
            }
        }
        return head;
    }
};
