/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode * reverse(struct ListNode * head){
    struct ListNode * next = NULL, * previous = NULL;
    
    while (head != NULL){
        next = head -> next;
        head -> next = previous;
        
        previous = head;
        head = next;
    }
    return previous;
}

bool isPalindrome(struct ListNode* head){
    struct ListNode * slow = head, *fast = head;
    while (fast -> next != NULL && fast -> next -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    struct ListNode * newhead = reverse(slow -> next);
    slow -> next = NULL;
    
    struct ListNode *dummy = head, *dummyNewHead = newhead;
    
    while (dummy != NULL && dummyNewHead != NULL){
        if (dummy -> val != dummyNewHead -> val){
            return false;
        }
        dummy = dummy -> next;
        dummyNewHead = dummyNewHead -> next;
    }
    
    return true;
    
}
