void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    if(head == NULL)
        return;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=head and fast->next->next!=head ){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast->next->next == head)
        fast = fast->next;
    *head1_ref=head;
    if(head->next != head)
        *head2_ref = slow->next;
        
    fast->next = slow->next;
    slow->next=head;
    
}
