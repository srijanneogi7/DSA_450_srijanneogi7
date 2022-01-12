// ITERATIVE 
vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>ans;
        if(root==NULL) return ans;
        stack<Node*>s;
        s.push(root);
        while(!s.empty()){
            root=s.top();
            s.pop();
            ans.push_back(root->data);
            if(root->right) s.push(root->right);
            if(root->left) s.push(root->left);
            // s.pop();
        }
        return ans;
    }

// RECURSIVE
void helper(Node* root,vector<int>&ans){
    if(root==NULL) return;
    ans.push_back(root->data);
    helper(root->left,ans);
    helper(root->right,ans);
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>ans;
  helper(root,ans);
  return ans;
}
