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
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp = new ListNode();
        tmp->next = NULL;
        ListNode *p = head;
        ListNode *q;
        while (p != NULL) {
            q = p->next;
            p->next = tmp->next;
            tmp->next = p;
            p = q;
        }
        return tmp->next;
    }
};