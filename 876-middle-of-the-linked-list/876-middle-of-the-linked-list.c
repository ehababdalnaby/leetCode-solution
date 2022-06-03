/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



/*
i will use fast and slow pointers algorithm
fast poiter will move by two steps at time
slow pointer will move by one step at time
*/

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fastPointer = head,*slowPointer = head;
    while(fastPointer->next != NULL && slowPointer != NULL)
    {
        fastPointer = fastPointer->next->next;
        slowPointer = slowPointer->next;
        
        if(fastPointer == NULL) //this condition for even number of nodes 
            break;
    }
    return slowPointer;
}