/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2) {
    struct ListNode* temp = list1;
    struct ListNode* temp2 = list2;
    struct ListNode* temp3 = list1;
    for (int i = 0; i < b + 1; i++) {
        temp3 = temp3->next;
    }
    for (int j = 0; j < a - 1; j++) {
        temp = temp->next;
    }
    temp->next = list2;
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp3;
    return list1;
}