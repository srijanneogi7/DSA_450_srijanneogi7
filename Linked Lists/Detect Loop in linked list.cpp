bool detectLoop(Node* head)
    {
        // your code here
        Node* slow=head;
        Node* fast= head;
        if(head==NULL) return false;
        
        while(fast and fast->next){
        
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
            
        }
        return false;
    }
