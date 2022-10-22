//
// Created by xiaoli on 22-10-22.
//
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
        ListNode *tmp = new ListNode();
        tmp->next = head;
        ListNode *cur = tmp;
        while (cur->next != nullptr && cur->next->next != nullptr) {
            ListNode *p = cur->next;
            ListNode *q = cur->next->next->next;
            cur->next = cur->next->next;
            cur->next->next = p;
            cur->next->next->next = q;

            cur = cur->next->next;
        }
        return tmp->next;
    }
};