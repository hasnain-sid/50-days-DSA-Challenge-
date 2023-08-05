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
    int getDecimalValue(ListNode* head) {
        ListNode* tmp = head;
        int val1 = 1;
        while(tmp->next != NULL)
        {
            val1*=2;
            tmp = tmp->next;
        }
        tmp = head;
        int ans = 0;
        while(tmp != NULL)
        {
            ans += val1*(tmp->val);
            val1/=2;
            tmp = tmp->next;
        }

        return ans;
        
    }
};