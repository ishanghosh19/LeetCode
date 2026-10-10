/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp=head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    temp=head;
    if (c == n) {
        struct ListNode* newHead = head->next;
        free(head);
        return newHead;
    }
    for(int i=0;i<c-n-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}