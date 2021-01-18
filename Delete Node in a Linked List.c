
//Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.

//It is guaranteed that the node to be deleted is not a tail node in the list.




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
     struct ListNode *ptr;
   ptr=node->next;
   node->val=ptr->val;
   node->next=node->next->next;
   free(ptr);
}
