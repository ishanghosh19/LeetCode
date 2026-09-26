/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* temp=head;
    
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    temp=head;
    for(int i=0;i<c/2;i++){
        temp=temp->next;
    }
    
    return temp;

}   