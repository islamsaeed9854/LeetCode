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
  ListNode* ans= nullptr;
    void rec(ListNode* h)
    {
        if(h == nullptr)
            return ;
         
        rec(h->next);
       ans->next = new ListNode(h->val) ;
       ans = ans->next;       
    }
    ListNode* reverseList(ListNode* head) {
       ans = new ListNode(-1);
         ListNode* ans2 = ans ; 
        
        rec(head);
       
        ans2 = ans2->next;
        return ans2;
    }
};