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
    ListNode *pseudo;
    
    bool isPalindrome(ListNode* head) {
        pseudo = head;
        return check(pseudo);
    }
    
    bool check(ListNode* p){
        if(p == NULL) return true;
        bool isPal = check(p->next) && (pseudo->val == p->val);
        pseudo = pseudo->next;
        return isPal;
    }
};
