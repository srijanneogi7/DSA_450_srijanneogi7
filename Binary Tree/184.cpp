// ITERATIVE 1:
// USING 2 STACKS:
vector<int> postOrder(Node* node) { 
        // code here
        if(node==NULL) return {};
        vector<int>ans;
        stack<Node*> s1,s2;
        s1.push(node);
        while(!s1.empty()){
            node=s1.top();
            s1.pop();
            s2.push(node);
            if(node->left) s1.push(node->left);
            if(node->right) s1.push(node->right);
        }
        
        while(!s2.empty()){
            ans.push_back(s2.top()->data);
            s2.pop();
        }
        return ans; 
         
    } 

// RECURSION
void helper(Node* root, vector<int>&ans){
    if(root==NULL) return;
    helper(root->left,ans);
    helper(root->right,ans);
    ans.push_back(root->data);
    
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  helper(root,ans);
  return ans;
}
