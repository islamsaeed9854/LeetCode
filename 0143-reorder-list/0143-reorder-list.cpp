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

// Node* newNode = new Node(temp->data);
class Solution {
public:
    
   
    void reorderList(ListNode* head ) {
         stack<ListNode*> st;
        ListNode * ptr = head;
        int size = 0;
        while(head != nullptr)
        {
            size++;
            st.push(head);
            head = head->next;
        }
        ListNode * ans = ptr;
        ptr = ptr->next;
        for(int i = 0 ; i < size/2; i ++){
            ListNode *element = st.top();
            ans->next = element;
            ans = ans->next;
            st.pop();
            ans->next = ptr;
            ans = ans->next;
            ptr = ptr->next;
        }
        ans->next =nullptr;
        head = ans;
    }
};