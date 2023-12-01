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
    int GCD(int a, int b)
    {
        while (a != b)
        {
            if (a > b) a -= b;
            else b -= a;
        }
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) return head;
        for (ListNode* tmp = head; tmp->next; tmp = tmp->next)
        {
            ListNode* node = new ListNode{GCD(tmp->val, tmp->next->val), nullptr};
            node->next = tmp->next;
            tmp->next = node;
            tmp = node;
        }
        return head;
    }
};