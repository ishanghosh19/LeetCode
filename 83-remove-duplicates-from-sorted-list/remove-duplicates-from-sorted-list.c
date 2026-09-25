/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) {
        return NULL;
    }

    struct ListNode* temp = head;

    while (temp != NULL && temp->next != NULL) {
        if (temp->val == temp->next->val) {
            struct ListNode* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            free(nodeToDelete);
        } else {
            temp = temp->next;
        }
    }
    return head;
}