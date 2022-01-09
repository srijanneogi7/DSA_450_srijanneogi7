//RECURSIVE SOLUTION
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
    void helper(Node* root,vector<int>&ans){
        if(root==NULL)return;
        
        helper(root->left,ans);
        ans.push_back(root->data);
        helper(root->right,ans);
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>ans;
        helper(root,ans);
        
        return ans;
    }
};

//ITERATIVE SOLUTION
vector<int> inOrder(Node* root)
    {
        //code here
        vector<int>ans;
        if(root==NULL) return ans;
        stack<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* cur=q.top();
            if(cur->left) {
                q.push(cur->left);
                cur->left=NULL;
            }
            else{
                ans.push_back(cur->data);
                q.pop();
                if(cur->right) q.push(cur->right);
            }
        }       
        return ans;
        
    }
