/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* next = NULL;
    struct ListNode* previous = NULL;
    while(head != NULL)
    {
        next = head->next;
        head->next = previous;
        previous = head;
        head = next;
    }
    return previous;
}