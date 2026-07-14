
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        // Create a dummy node to act as the start of our sorted list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head; // Pointer to traverse the original unsorted list
        
        while (curr != nullptr) {
            // Save the next node to process before we detach 'curr'
            ListNode* nextNode = curr->next;
            
            // Start scanning the sorted list from the beginning
            ListNode* prev = dummy;
            
            // Find the correct insertion point in the sorted list
            while (prev->next != nullptr && prev->next->val < curr->val) {
                prev = prev->next;
            }
            
            // Insert 'curr' between 'prev' and 'prev->next'
            curr->next = prev->next;
            prev->next = curr;
            
            // Move to the next unsorted node
            curr = nextNode;
        }
        
        ListNode* sortedHead = dummy->next;
        delete dummy; // Clean up memory
        return sortedHead;
    }
};



        
