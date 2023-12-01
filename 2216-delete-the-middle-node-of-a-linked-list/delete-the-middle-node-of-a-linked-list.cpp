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
    int countNode(ListNode* head)
    {
        int count = 0;
        for (ListNode* t = head; t; t=t->next)
        {
            count++;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        int n = countNode(head);
        if (n == 1) return nullptr;
        ListNode* cur = head;
        int count = 0;
        while (count < n/2 - 1)
        {
            cur = cur->next;
            count++;
        }
        if (cur->next) cur->next = cur->next->next;
        return head;
    }
};