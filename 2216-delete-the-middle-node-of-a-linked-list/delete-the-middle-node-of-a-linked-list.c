/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;

    if(head==NULL || head->next==NULL){
        return NULL;
    }
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode *temp=NULL;
    temp=head;
    while(temp->next!=slow){
        temp=temp->next;

    }
    temp->next=slow->next;
    free(slow);

    return head;
}