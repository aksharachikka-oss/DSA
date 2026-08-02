/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *s, *t;

    if (head == NULL)
        return head;

    s = head;
    t = head->next;

    while (t != NULL) {
        if (s->val == t->val) {
            s->next = t->next;
            free(t);
            t = s->next;
        } else {
            s = t;
            t = t->next;
        }
    }

    return head;
}