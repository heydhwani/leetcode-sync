class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next || k == 0) return head;
        
        // Step 1: find length
        ListNode* temp = head;
        int n = 1;
        
        while(temp->next) {
            temp = temp->next;
            n++;
        }
        
        // Step 2: make circular
        temp->next = head;
        
        // Step 3: optimize k
        k = k % n;
        
        int steps = n - k;
        
        // Step 4: find new tail
        ListNode* newTail = head;
        for(int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }
        
        // Step 5: new head
        ListNode* newHead = newTail->next;
        
        // break the circle
        newTail->next = NULL;
        
        return newHead;
    }
};