#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
* struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode{
    int val;
    struct ListNode * next;//pointer to the next node in the list
};
 /* 3 4 2       2 4 3 (0)
    4 6 5       5 6 4 (0)
    8 0 7       7 0 8 (0)
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode * head = NULL,*tail = NULL;
    int carry = 0;
    while(l1 || l2){//l1 or l2 have value;
        int n1 = l1?l1->val:0;//assign value to n1,n2
        int n2 = l2?l2->val:0;
        int sum = n1 + n2 + carry;
        if(!head){//if head == NULL
            head = tail = malloc(sizeof(struct ListNode));
            tail->val = sum%10;
            tail->next = NULL;
        }
        else{
            tail->next = malloc(sizeof(struct ListNode));
            tail->next->val = sum%10;
            tail = tail->next;
            tail->next = NULL;
        }
        carry = sum/10;
        if(l1){
            l1 = l1->next;
        }
        if(l2){
            l2 = l2->next;
        }
    }
    if(carry>0){
        tail -> next = malloc(sizeof(struct ListNode));
        tail -> next ->val = carry;
        tail -> next ->next = NULL;
    }
    return head;
}