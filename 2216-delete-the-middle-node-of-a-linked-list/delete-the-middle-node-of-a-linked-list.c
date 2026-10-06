/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    int count=0;
    struct ListNode* temp=head;
    if(head==NULL || head->next==NULL)
    return NULL;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    count=count/2;
    temp=head;
    for(int i=1;i<count;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}