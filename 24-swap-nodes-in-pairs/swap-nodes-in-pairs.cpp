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
    ListNode* swapPairs(ListNode* head) {
        // if (!head) return head;
        // ListNode* cur = head;
        // ListNode dummy(0, head);
        // ListNode* prev = &dummy;
        // while (cur && cur->next)
        // {
        //     ListNode* next = cur->next;
        //     cur->next = next->next;
        //     next->next = prev->next;
        //     prev->next = next;
        //     prev = cur;
        //     cur = cur->next;
        // }
        // return dummy.next;
        ListNode* cur = head;
        while (cur && cur->next)
        {
            swap(cur->val, cur->next->val);
            cur = cur->next->next;
        }
        return head;
    }
};