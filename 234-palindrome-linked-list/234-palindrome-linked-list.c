/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head){
    int a[100000], count = 0;
    while(head)
    {
        a[count++] = head->val;
        head = head->next;
    }
    for(int i=0; i<count/2; i++)
        if(a[i] != a[count-i-1])
            return false;
    return true;
}