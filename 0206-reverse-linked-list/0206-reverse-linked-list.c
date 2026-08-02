/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *t=head,*s=NULL,*temp;
    while(t!=NULL){
        temp=t->next;
        t->next=s;
        s=t;
        t=temp;
    }
    return s;
}
