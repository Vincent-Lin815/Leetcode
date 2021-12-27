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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode *prehead = new ListNode(0);
        prehead->next = head;
        ListNode *dummy = prehead;
        
        while(dummy){
            if(dummy->next && dummy->next->next && dummy->next->val == dummy->next->next->val){
                ListNode *temp = dummy->next;
                
                while(temp->next && temp->val == temp->next->val){
                    ListNode *del = temp;
                    temp = temp->next;
                    delete del;
                }
                
                dummy->next = temp->next;
                delete temp;
            }else{
                dummy = dummy->next;
            }
        }
        
        return prehead->next;
    }
};
