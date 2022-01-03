Node* segregate(Node *head) {
        
        // Add code here
        if(head==NULL) return head;
        Node* z=new Node(-1);
        Node* f=new Node(-2);
        Node* t=new Node(-3);
        Node* zero=z,*one=f,*two=t;
        
        int ze=0,on=0,tw=0;
        Node* temp=head;
        while(temp){
            if(temp->data==0) ze++;
            else if(temp->data==1) on++;
            else tw++;
            temp=temp->next;
        }
        if((ze && !on && !tw)||(!ze && on && !tw)||(!ze && !on && tw))  return head;
        
        while(head){
            if(head->data==0){
                zero->next=head;
                zero=head;
            }
            else if(head->data==1){
                one->next=head;
                one=head;
            }
            else if(head->data==2){
                two->next=head;
                two=head;
            }
            head=head->next;
        }
        
        if(ze and on and tw){
            zero->next=f->next;
            one->next=t->next;
            two->next=NULL;
        }
        else if(!ze and on and tw){
            one->next=t->next;
            two->next=NULL;
            return f->next;
        }
        else if(ze and on and !tw){
            zero->next=f->next;
            one->next=NULL;
        }
        else if(ze and !on and tw){
            zero->next=t->next;
            two->next=NULL;
        }
        
        
        return z->next;
        
        
    }
};
