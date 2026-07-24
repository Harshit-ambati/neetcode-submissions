class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count = 0;
        
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }
        
        if (count == n) {
            ListNode* temp = head->next;
            delete head; // Free memory if required
            return temp; // The new head is the second node
        }
        
        curr = head;
        for (int i = 0; i < count - n - 1; i++) {
            curr = curr->next;
        }
        
        ListNode* nodeToDelete = curr->next;
        curr->next = curr->next->next;
        delete nodeToDelete;
        
        return head;
    }
};
