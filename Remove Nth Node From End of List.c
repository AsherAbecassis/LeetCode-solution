

//Given the head of a linked list, remove the nth node from the end of the list and return its head.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){

    
   struct ListNode *temp =head;
   struct ListNode *s =head;
    
    
    
    
    
    for( int i=0;i<n;i++)
    {
        temp=temp->next;
    }
    
    if(temp==NULL)
    {
        return head->next;
    }
    
    while (temp->next != NULL) {
        
        temp=temp->next;
        s=s->next;
        
        
    }
    
    s->next=s->next->next;
    
    
    return head;
    
    
}
