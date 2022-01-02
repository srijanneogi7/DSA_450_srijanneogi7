Node* reverseL(Node* head){
        if(head==NULL || head->next==NULL) return head;
        auto res = reverseL(head->next);
        head->next->next = head;
        head->next = NULL;
        return res;
    }
    
    Node* addOne(Node *head) 
    {
        Node* temp=reverseL(head);
        head=temp;
        while(head){
            if(head->data!=9){
                head->data+=1;
                break;
            }
            else if(head->data== 9 and head->next!=NULL){ 
                head->data=0;
            }
            else if(head->data== 9 and head->next==NULL){ 
                head->data=head->data+1;}
            
            head=head->next;
            
            
        }
        head=reverseL(temp);
        // return head of list after adding one
        return head;
    }
