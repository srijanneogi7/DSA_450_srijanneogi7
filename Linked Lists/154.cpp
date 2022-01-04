bool isCircular(Node *head)
{
   // Your code here
    if(head==NULL)return true;
    Node* temp=head->next;
    while(temp){
        temp=temp->next;
        if(temp==head) return true;
    }
    return false;
    
}
