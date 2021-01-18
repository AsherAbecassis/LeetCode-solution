

//Reverse a singly linked list.

struct ListNode* reverseList(struct ListNode* head){

    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node *ptr1=head;
    head=head->next;
    ptr1->next=NULL;
    
    node *ptr2 =head;
    node *ptr3= head;
    head=head->next;
    
    while (head!=NULL) {
        
        ptr3->next=ptr1;
        ptr1=ptr3;
        ptr2=head;
        head=head->next;
        ptr3=ptr2;
        
        
    }
    
    ptr3->next=ptr1;
    ptr1=ptr3;
    head=ptr1;
    return head;


}
