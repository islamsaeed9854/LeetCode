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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      map<int,int>mp;
         ListNode *tmp = list1;
    while(list1 != nullptr)
    {
        mp[list1->val]++;
        list1 = list1->next;
    }
         while(list2 != nullptr)
    {
        mp[list2->val]++;
        list2 = list2->next;
    }
       ListNode *ans = new ListNode(-1);
        ListNode *ans2 = ans;
        for(auto i :mp){
            for(int j  =0 ;j < i.second ; j++){
                ans->next = new ListNode(i.first);
                ans = ans->next;
            }
        }
        ans2 = ans2->next;
        return ans2;
    }
};