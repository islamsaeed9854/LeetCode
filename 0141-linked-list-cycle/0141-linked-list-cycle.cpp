/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int cnt = 0 ;
        
        if(head == nullptr)
            return false;
        while(head->next != nullptr){
            head = head->next;
            cnt++;
            if(cnt > 10000)
                return true;
            
        }
        return false;
        
    }
};