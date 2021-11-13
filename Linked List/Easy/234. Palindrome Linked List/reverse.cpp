class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // use two pointers to find the mid position
        ListNode *slow = head, *fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next; 
        }
        
        // reverse the 2nd half
        ListNode *list1 = head, *list2 = reverse(slow);
        
        // compare the two lists
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val != list2->val){
                return false;
            }
            list1 = list1->next;
            list2 = list2->next;
        }
        return true;
        
        
    }
    
    ListNode *reverse(ListNode *head){
        ListNode *prev = nullptr, *curr = head, *next = nullptr;
        
        while(curr != nullptr){
            next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;
        }
        
        return prev;
    } 
};
