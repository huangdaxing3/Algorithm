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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmpHead = new ListNode();
        tmpHead->next = head;
        ListNode *f, *s;
        f = tmpHead;
        s = tmpHead;
        n = n + 1;
        while (n-- && f != nullptr) {
            f = f->next;
        }
        while (f) {
            f = f->next;
            s = s->next;
        }
        ListNode * tmp = s->next;
        s->next = s->next->next;
        delete tmp;
        return tmpHead->next;
    }
};