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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 1;
        ListNode* curr = head;
        
        while(curr->next != NULL){
            curr = curr->next;
            length++;
        }
        
        curr = head;
        
        if(length-n == 0) {
            head = head->next;
            return head;
        }
        
        for(int i = 0; i < length-n-1; i++){
            curr = curr->next;
        }
        
        curr->next = curr->next->next;
        
        return head;
    }
};
