//Given a singly linked list, determine if it is a palindrome.


bool isPalindrome(ListNode* head) {

    
    bool isPalindrome(ListNode* head) {
    
        if(head==NULL || head->next==NULL)
    {
        return true;
    }
   
        
        stack<int> s;
    
    ListNode* temp=head;
    
    
    
    while (temp!=NULL) {
        
        s.push(temp->val);
        
        temp=temp->next;
    }
    
    
    temp=head;
    while (temp!=NULL) {
        
        if(s.top()!= temp->val)
        {
            return false;
        }
        s.pop();
        temp=temp->next;
        
    }
    return true;
    
    
    
      
    }
    
    
    
}
