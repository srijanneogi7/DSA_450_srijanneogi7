Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* dummy=new Node(0);
    Node* head=dummy;
    while(head1 and head2){
        if(head1->data==head2->data){
            Node* temp=new Node(head1->data);
            head->next=temp;
            head=temp;
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->data>head2->data)
            head2=head2->next;
        else
            head1=head1->next;
    }
    return dummy->next;
}
