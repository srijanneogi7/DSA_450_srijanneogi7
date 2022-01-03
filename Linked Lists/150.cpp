int length(Node*head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    return count;
}
// int intersectPoint(Node* head1, Node* head2)
// {
//     // Your Code Here
//     int l1=0,l2=0;
//     l1=length(head1);
//     l2=length(head2);
//     int d=0;
//     Node *p=NULL,*q=NULL;
//     if(l1>l2){
//         d=l1-l2;
//         p=head1;
//         q=head2;
//     }
//     else{
//         d=l2-l1;
//         p=head2;
//         q=head1;
//     }
//     while(d--){
//         p=p->next;
//     }
//     while(head1 and head2){
//         if(p==q) return p->data;
//         p=p->next;
//         q=q->next;
//     }

//     return -1;
// }
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int n1 = 0 , n2 = 0 , d;
    Node *p = head1;
    Node *q = head2;
    while (p) {
        n1++;
        p = p -> next;
    }
    while (q) {
        n2++;
        q = q -> next;
    }
    d = abs(n1-n2);
    p = head1; q = head2;
    if (n1 > n2){
        for (int i = 0; i < d; i++)
            p = p -> next;
    }
    else if (n2 > n1){
        for (int i = 0; i < d; i++) q = q -> next;
    }

    while (p != NULL && q != NULL){
        if (p == q) return p -> data;
        p = p -> next;
        q = q -> next;
        
    }
    return -1;
}
