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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)
            return head;
        ListNode * st= NULL;
        // ListNode * end = NULL;
        ListNode *ptr = head;
        left--;
        while(left--)
        {
            st = ptr;
            ptr = ptr->next;
        }
        ListNode *end = head;
        ListNode *back_node = NULL;
        while(right--)
        {
            back_node = end;
            end = end->next;
        }
        ListNode * prevNode = end;
        ListNode * nextNode = NULL;
        while(ptr != end)
        {
            nextNode = ptr->next;
            ptr->next = prevNode;
            prevNode = ptr;
            ptr = nextNode;
        }
        if(st != NULL)
        st->next = back_node;
        else
            return back_node;

        return head;
        
    }
};