vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    if(root==NULL) return ans;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        
        ans.push_back(curr->data);
        if(curr->right!=NULL) q.push(curr->right);
        if(curr->left!=NULL) q.push(curr->left);
        q.pop();    
        
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}
