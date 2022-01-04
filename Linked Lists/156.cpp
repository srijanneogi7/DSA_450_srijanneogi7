// Check if Linked List is Palindrome 
Node* reverse(Node* head)
    {
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow=head;
        Node* fast=head->next;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* temp=reverse(slow->next);
        while(temp){
            if(head->data!=temp->data) return false;
            head=head->next;
            temp=temp->next;
            
        }
        return true;
    }
