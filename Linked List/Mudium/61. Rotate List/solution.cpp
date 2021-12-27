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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || !head || !head->next) return head;
        
        int length = 1; 
        ListNode *curr = head;
        
        while(curr->next){
            curr = curr->next;
            length++;
        }
        
        curr->next = head;
        
        for(int i = 0; i < length-(k%length); i++){
            curr = curr->next;
        }
        
        head = curr->next;
        curr->next = NULL;
        
        return head;
    }
};
