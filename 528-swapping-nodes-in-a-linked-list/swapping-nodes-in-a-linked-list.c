/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode *first = head;
    struct ListNode *second = head;
    struct ListNode *curr = head;

    for (int i = 1; i < k; i++) {
        first = first->next;
    }

    curr = first;
    while (curr->next != NULL) {
        curr = curr->next;
        second = second->next;
    }

    int temp = first->val;
    first->val = second->val;
    second->val = temp;

    return head;
}