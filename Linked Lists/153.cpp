// int length(ListNode* node){
//     int n;
//     while(node){
//         n++;
//         node=node->next;
//     }
//     return n;
// }
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* f=head;
        ListNode* s=head;
//         int n=length(f);
//         if(head==nullptr) return head;
//         if(n%2==0){
//             for(int i=0;i<n/2;i++){
//                 f=f->next;
//             }
//             return f->next;
//         }
//         else{
            
//             for(int i=0;i<(n+1)/2;i++){
//                 f=f->next;
//             }
//             return f;
//         }      
        while(f!=NULL &&    f->next!=NULL){
            f=f->next->next;
            s=s->next;
        }   
        return s;
    }
