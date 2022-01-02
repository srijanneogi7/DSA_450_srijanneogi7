Node *removeDuplicates(Node *head)
{
 // your code goes
    if(head==NULL)  return head;
    Node* temp=head;
    while(temp and temp->next){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else
            temp=temp->next;
    }
    return head;
}
