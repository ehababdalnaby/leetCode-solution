/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head->next == NULL)
    {
        return NULL;
    }
    
    
    struct ListNode* fastPointer = head,*slowPointer = head;
    while(fastPointer->next != NULL )
    {
        fastPointer = fastPointer->next;
        n--;
        if(n < 0)
        {
            slowPointer = slowPointer->next;
        }
    }
    if(n > 0)
    {
        head = head->next;
        free(slowPointer); 
        return head;
    }
    fastPointer = slowPointer->next;
    slowPointer->next = slowPointer->next->next;
    free(fastPointer);
    return head;
}