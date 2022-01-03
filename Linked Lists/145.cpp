Node * removeDuplicates( Node *head) 
    {
     // your code goes here
    if(head==NULL) return head;
    unordered_set<int>s;
    s.insert(head->data);
    Node* temp=head->next;
    Node* slow=head;
    
    while(temp){
        if(s.count(temp->data)){
            slow->next=temp->next;
        }
        else{
        s.insert(temp->data);
        slow=slow->next;
        }
        temp=temp->next;
    } 
        
        return head;
    }
